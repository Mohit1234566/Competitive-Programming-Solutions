//given nos from 1 to N
//which is divisible by primes less than 20
/*
input:5
5 10 15 12 18
output:
4 9 14 11 9*/

#include<iostream>
using namespace std;
#define ll long long

int main(){
ll t;
cin>>t;
ll primes[]={2,3,5,7,11,13,17,19};
while(t--)
{

    ll n;
    cin>>n;

    ll subset=(1<<8)-1;
    ll ans=0;
    //make a variable denominator which is subset of(2,3,5)
    for(ll i=1;i<=subset;i++)
    {   ll denom= 1;
        ll setBits=__builtin_popcount(i);

    for(ll j=0;j<=7;j++)
    {if(i&(1<<j)){
        denom=denom*primes[j];
    }
    }
    if(setBits&1)
        ans += n/denom;//no of set bits is odd

    else
        ans -= n/denom;//no of set bits is even
    }
    cout<<ans<<endl;

}
return 0;
}

