/*
first line contains integer N,M denoting no. of books and number
of students respectively.Next line contains N integers,
denoting the number of pages in N books.
input:4 2
10 20 30 40
output:60

*/
#include<iostream>
using namespace std;
#define ll long long int

bool isValidconfig(ll books[],ll n,ll k,ll ans)
{

    int students=1;
    ll current_pages=0;
    for(int i=0;i<n;i++)
    {
        //10 +20 max limit=50
        if(current_pages+books[i]>ans)
        {

            current_pages=books[i];
            students++;
            if(students>k)
                return false;
        }
        else
        {

            current_pages+=books[i];
        }
    }
    return true;
}
ll binarySearchBooks(ll books[],int n,ll k)
{

    ll total_pages=0;
    ll s=0,e=0;
    for(int i=0;i<n;i++)
    {

        total_pages+=books[i];
        s = max(s,books[i]);
    }
    e=total_pages;
    int finalans=0;
    while(s<=e)
    {
        ll mid=(s+e)/2;
        if(isValidconfig(books,n,k,mid))
        {
            finalans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }

    }
    return finalans;
}
int main()
{

    ll n;
    ll k;
    cin>>n>>k;
    ll books[100005];
    for(int i=0;i<n;i++)
    {

        cin>>books[i];
    }
    cout<<binarySearchBooks(books,n,k)<<endl;
}
