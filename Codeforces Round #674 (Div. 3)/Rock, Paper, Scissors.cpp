#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long  n,s,Min,k=0,p,l,d=0;
    cin>>n;
    vector<int>a(3),b(3);
    
    long long Max=0;
	for (int i = 0; i < 3; i++)
	 cin >> a[i];
	for (int i = 0; i < 3; i++) 
	cin >> b[i];
    Max=min(a[0],b[1])+min(a[1],b[2])+min(a[2],b[0]);
   	if(a[0]>(b[0]+b[2]))
   	{
	Min=a[0]-b[0]-b[2];  
    cout<<Min<<" "<<Max<<endl;
}
else if(a[1]>(b[0]+b[1]))
{
	Min=a[1]-b[0]-b[1];
	cout<<Min<<" "<<Max<<endl;
}
else if(a[2]>(b[1]+b[2]))
{
   Min=a[2]-b[1]-b[2];
     cout<<Min<<" "<<Max<<endl;
 
}
else
  cout<<"0"<<" "<<Max<<endl;
	
   
    	
	}