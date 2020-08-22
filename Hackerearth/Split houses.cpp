#include<iostream>
using namespace std;

int main()
{
int n;
cin>>n;
int flag=1;
string village;
cin>>village;
for (size_t i = 0; i < n; i++)
{
if(village[i]=='H' && village[i+1]=='H')
{
flag=0;
break;
}
else
{
if(village[i]=='.')
village[i]='B';
}

 }

if(flag)

{

cout<<"YES\n";

cout<<village;

}

else

{

cout<<"NO";

}


}