/*
in a german lotto u havee to swlwct nos from set(1,2..49).
A popular strategey to play lotto .it doesn't increase your chance of winning
k(k>6) of these 49 numbers and then play several games.
k=8 and S=f1:2,3,5,8,13,21,34 there are 26 possible games[1,2,3,5,8,13]
[1,2,3,5,8,21],[1,2,3,5,8,34],[1,2,3,5,13,21],..[3,5,8,13,21,34]*/

#include<iostream>
using namespace std;
int main()
{

    //Numbers are from 1-49
    //choose a subset of 6 nos
    int a[]={1,2,4,5,6,7,8,10,12};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=1;i<n-5;i++)
    {

        for(int j=i+1;j<n-4;j++)
        {
            for(int k=j+1;k<n-3;k++)
            {

                for(int l=k+1;l<n-2;l++)
                {

                    for(int m=l+1;m<n-1;m++)
                    {

                        for(int o=m+1;o<n;o++)
                            {
        cout<<a[i]<<","<<a[j]<<","
        <<a[k]<<","<<a[l]<<","<<a[m]<<","<<a[n]<<","<<a[o]<<endl;}

                    }
                }
            }
        }
    }
    return 0;
}
