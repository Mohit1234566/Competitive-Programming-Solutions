#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	//first component
	cout<<"*";
	for(int i=1;i<=(n-3)/2;i++)
	cout<<" ";
	for(int i=1;i<=(n+1)/2;i++)
	cout<<"*";
	cout<<endl;
	//second component
	for(int i=1;i<=(n-3)/2;i++)
		{
			cout<<"*";
			for(int j=1;j<=(n-3)/2;j++)
			cout<<" ";

			cout<<"*"<<endl;
		}
	//third component
	for(int i=1;i<=n;i++)
	cout<<"*";
	cout<<endl;
	//fourth component
	for(int k=1;k<=(n-3)/2;k++)
	{
		//spaces
		for(int j=1;j<=(n-3)/2+1;j++)
			cout<<" ";
		//star
		cout<<"*";
		//spaces
		for(int i=1;i<=(n-3)/2;i++)
		cout<<" ";
		//star
		cout<<"*"<<endl;

	}
	//fifth component
	for(int i=1;i<=(n+1)/2;i++)
	{
		cout<<"*";
	}
	for(int j=1;j<=(n-3)/2;j++)
	cout<<" ";
	cout<<"*"<<endl;





	return 0;
}
