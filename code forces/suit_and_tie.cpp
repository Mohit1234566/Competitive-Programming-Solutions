/*
input:
4
1 1 2 3 3 2 4 4
output:
2
---------
3
1 1 2 2 3 3
o/p:0
In the first sample case, we can transform
11233244->11232344->11223344 in two steps.
Note that the sequence 11233244 ->11323244->11332244 also
works in the same number of steps.
*/
#include<iostream>
#include <vector>
using namespace std;
int main(){

    long n,k;
    cin>>n;
    vector<long> a(2 * n);
    for(long p = 0; p < 2 * n; p++)
    {   cin>>a[p];

    }
    long cnt(0);
    for(long p = 0; p < 2 * n; p++){
        if(!a[p])
        {continue;}
        long q;
        for(q = p + 1; q < 2 * n && a[q] != a[p]; q++)
        {cnt += (a[q] > 0);}
        a[q] = 0;
    }

    cout<<cnt;


    return 0;
}
