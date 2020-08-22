/*
Input : arr[] = {-2, 0, 1, 3}
        sum = 2.
Output : 2
Explanation :  Below are triplets with sum less than 2
               (-2, 0, 1) and (-2, 0, 3)

Input : arr[] = {5, 1, 3, 4, 7}
        sum = 12.
Output : 4
Explanation :  Below are triplets with sum less than 12
               (1, 3, 4), (1, 3, 5), (1, 3, 7) and
               (1, 4, 5)
               */
#include<iostream>
#include<math.h>
using namespace std;
int count_trip(int arr[],int n,int s)
{

    int ans=0;
    for(int i=0;i<n-2;i++)
    for(int j=i+1;j<n-1;j++)
    for(int k=j+1;j<n;j++)
    {

        if(arr[i]+arr[j]+arr[k]<s)
            ans++;
    }
    return ans;
}

int main()
{
    int arr[]={5,1,3,4,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=12;
    cout<<count_trip(arr,n,sum)<<endl;
    return 0;

}
