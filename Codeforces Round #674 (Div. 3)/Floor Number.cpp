#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t,x,k,p;
 
    scanf("%d",&t);
 
    while(t--)
    {
        scanf("%d %d",&x,&k);
 
        if(x<=2) printf("1\n");
        else
        {
            x=x-2;
            if(x%k==0) p=x/k;
            else p=x/k+1;
            printf("%d\n",p+1);
        }
    }
}