
#include<iostream> 
#include<string.h> 
using namespace std; 
int main() 
{
string s1;
cin>>s1;
if(s1.length()>20)
exit(0);
int x=0,y=0,freq;
for(int i=0;i<s1.length();i++)
{
	if(s1[i]=='z' || s1[i]=='Z')
	{
		x++;
	}
	else
	{
		y++;
	}
}

	freq= 2*x;
	if(freq==y)
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;


}
