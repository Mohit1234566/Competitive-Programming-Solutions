/*
Input:

2
3 3
2 7 4
5 6
9 10 4 7 2

Output:

Case #1: 1 3 2
Case #2: 3 5 1 2 4
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
const int mod=1000000007;
const int INF =1e18;
int n,a[100005],x;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    pair<int,int> b[100005];
    cin>>t;
    for(int tc=1;tc<=t;tc++){
        cin>>n>>x;
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i].first = (a[i]-1)/x;
            if(b[i].first == -1)
                b[i].first=0;
            b[i].second =i;
        }
        sort(&b[0],&b[n]);
        cout<<"Case #"<<tc<<":";
        for(int i=0;i<n;i++)
            cout<<" "<<b[i].second+1;
        cout<<'\n';
    }


}
