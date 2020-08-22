#include<bits/stdc++.h>

using namespace std;


 

int main()

{

int t;

cin>>t;

while(t--)

{

int x,y,a,b,cost1=0,cost2=0;

cin>>x>>y;

int p;

cin>>p;

for(int i=0;i<p;i++)

{

cin>>a>>b;

cost1+=(a*x+b*y);

cost2+=(a*y+b*x);

}

cout<<((cost1<cost2)?cost1:cost2)<<endl;

}


 

return 0;

}