#include<iostream>

#include<stdio.h>

#include<string.h>


 

using namespace std;

int main()

{

  char a[100];

     int o;

 

for(int j=0;j<100;j++)

cin>>a[j];

  int b= strlen(a);

  for (int i = 0; i < b/2; ++i)

{

      

  if(a[i]==a[b-i-1])

      o=1;

 

          

 

      else

          {o=0;

      break;}}

         if (o==1)

         cout<<"YES";

         else

         cout <<"NO";


 

  

  return 0;

}