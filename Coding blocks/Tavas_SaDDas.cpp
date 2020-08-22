/*
You are given a lucky number n. Lucky numbers are the positive integers
 whose decimal representations contain only the lucky digits 4 and 7.
For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.
If we sort all lucky numbers in increasing order,
what's the 1-based index of n?
input: 4
output:1
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m;
    m=n;
    int ansA(1),ansB(0);
    vector<int> digits;
    while(m>0){
        ansA *= 2;
        digits.push_back(m%10);
        m/=10;
        for(int p=digits.size()-1;p>=0;p--)
        {

            ansB=2*ansB+(digits[p]==7);
        }
        int ans=ansA+ansB-1;
        cout<<ans;
    }
}
