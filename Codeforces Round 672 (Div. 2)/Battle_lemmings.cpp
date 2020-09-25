#include <bits/stdc++.h>

#define fr(i,l,r) for(int i=l;i<=r;++i)
#define rf(i,l,r) for(int i=l;i>=r;--i)
#define pb push_back
#define ft first
#define sd second
#define all(x) x.begin(),x.end()
#define int ll
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pll;

const ll N=1e6+228;
const ll oo=10000;
const ll K=300;
const ll mod=998244353;

mt19937_64 rnd(time(0));

int a[N];
int n,x;

int calc(){
    int ans=0;
    fr(i,1,n){
        if(a[i]==1)continue;
        bool ok=0;
        fr(j,i+1,n){
            if(a[j]==1)ok=1;
            if(a[j]==0)ans+=ok;
        }
    }
    return ans;
}

int dp[85][3160+10][85];

int func(int x){
    return (x-1)*x/2;
}

void solve(){
    vector<int> v;
    cin>>n;
    int s=0;
    fr(i,1,n){
        cin>>a[i],s+=a[i];
        if(a[i]==1)v.pb(i);
    }
    int x=(n-1)*n/2;
    fr(i,0,n)fr(j,0,x)fr(w,0,s)dp[i][j][w]=oo;
    dp[0][0][0]=0;
    fr(i,1,n){
        fr(j,0,x-1){
            fr(w,0,s-1){
               
                int t=v[w];
                fr(e,i,n){
                    int q=j+abs(e-t);
                    dp[e][q][w+1]=min(dp[e][q][w+1],dp[i-1][j][w]+func(e-i));
                }
            }
        }
    }

    cout<<calc();
    int ans=calc();
    fr(w,1,x){
        fr(i,1,n)dp[n][w][s]=min(dp[n][w][s],dp[i][w][s]+func(n-i));
        ans=max(ans,func(n-s)-dp[n][w][s]);
        cout<<' '<<ans;
    }
    cout<<endl;
}

int32_t main(){
 ios_base::sync_with_stdio(0),cin.tie(0);
 int T=1;

 while(T--){
    solve();
 }
}