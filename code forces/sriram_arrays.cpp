/*
input:
10
1 -1 2 -5 7 -6 -5 3 -5 10
output:
-5 7 10
*/

#include <iostream>
#include <stack>
#include <climits>
using namespace std;

void LordRam(int n){

	stack<int> s;
	int x;
	for(int i=0;i<n;i++){
		cin>>x;

		if(!s.empty() && s.top()>0 && x<0){
			// Arrows will collide
			bool flag = true; // For x, whether we need to insert it or not
			while(!s.empty() && s.top()>0 && x<0){
				if(abs(x) == abs(s.top())){
					s.pop();
					flag = false;
				}
				else if(abs(x)>abs(s.top())){
					s.pop();
					flag = true;
				}
				else if(abs(x)<abs(s.top())){
					flag = false;
					break;
				}
			}
			if(flag) s.push(x);
		}
		else{
			// Simply insert the element
			s.push(x);
		}
	}

	stack<int> s1;
	while(!s.empty()){
		s1.push(s.top());
		s.pop();
	}

	while(!s1.empty()){
		cout<<s1.top()<<" ";
		s1.pop();
	}
	cout<<endl;
}

int main(){
	int n;
	cin>>n;

	LordRam(n);
	return 0;
}
