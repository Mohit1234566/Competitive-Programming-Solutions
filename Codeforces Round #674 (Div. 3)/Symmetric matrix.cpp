#include<bits/stdc++.h>
#define MAXN 105
using namespace std;
int a1[MAXN],a2[MAXN],a3[MAXN],a4[MAXN];  
 
 
int main()
{
 ios::sync_with_stdio(false);
 int T;
 cin>>T;
 int n,m;
 while(T--)
 {
  cin>>n>>m;
  bool op1 = 0;
  for(int i = 1; i<=n;i++)
  {
   cin>>a1[i]>>a2[i]>>a3[i]>>a4[i];
   if(a2[i] == a3[i])
    op1 = 1;
  }
  if(m & 1 || op1 == 0)
   cout<<"NO\n";
  else
  {
   cout<<"YES\n";
  }
 }
 return 0;
 }