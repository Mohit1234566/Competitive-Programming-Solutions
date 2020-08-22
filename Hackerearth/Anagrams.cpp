#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

int fun(string s1, string s2)

{

        int a[26]={0};

       for(int i=0;i<s1.length();i++)
        a[s1[i]-'a']++;       

       for(int i=0;i<s2.length();i++)

        a[s2[i]-'a']--;

      int ans=0;

      for(int i=0;i<26;i++)

      ans += abs(a[i]);

      return ans;

} 

int main()

{

    int t;

    cin>>t;

    while(t--)

    {

         string s1,s2;
         cin>>s1>>s2;
         cout<<fun(s1,s2)<<endl;

     }

      return 0;

}