#include<bits/stdc++.h>
using namespace std;
long long n,l,A[500005],t;
int main() {
    cin>>t;
    while(t--) {
        cin>>n;
        for(long long i=1;i<=n;i++) {
            cin>>A[i];
        }
        l=0;
        for(long long i=2;i<=n;i++) {
            if(A[i]>=A[i-1]) l=1;
        }
        if(l==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}