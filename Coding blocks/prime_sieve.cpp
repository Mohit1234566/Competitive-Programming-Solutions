#include<iostream>
using namespace std;
#define ll long long
#define N 1000005

void prime_seive(int *p)
{
    //first all odd nos as prime
    for(int i=3;i<=1000000;i+=2)
    {  p[i]=1;}

    //sieve
    for(ll i=3;i<=1000000;i+=2)
    {

        if(p[i]==1)
            //mark all the multiples of i as not prime
            for(ll j=i*i;j<=1000000;j+=i)
        {

            p[j]=0;
        }
    }//
    p[2]=1;
    p[1]=p[0]=0;
}
int main()
{

    int n;
    cin>>n;
    int  p[N]={0};
    prime_seive(p);
    for(int i=0;i<=n;i++)
    {

       if(p[i]==1)
            cout<<i<<" ";
    }
    return 0;
}
