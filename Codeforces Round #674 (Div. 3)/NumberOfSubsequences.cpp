#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int mod = 1e9+7;
ll power(ll a,ll b)
{

    ll result = 1;
    while(b>0){
        if(b&1){
            result *= a;
            result %= mod;
        }
        a *= a;
        a %= mod;
        b /= 2;
    }
    return result;
}
void solve(){
int n;
string s; cin>>n>>s;
ll la=0,ra=0, lc=0, rc=0,lq=0,rq=0;
for(char c: s){
    if(c == 'a') ++ra;
    if(c == 'c') ++rc;
    if(c == '?') ++rq;

}
ll ans = 0;
for(int i=0;i<n;i++)
{

    ra -= s[i] == 'a';
    rc -= s[i] == 'c';
    rq -= s[i] == '?';
    if(s[i] == 'b' || s[i] == '?'){
        ans += (la*rc)%mod * power(3,lq + rq)%mod;
        if(lq) ans += (lq*rc)%mod * power(3,lq+rq-1)%mod;
        if(rq) ans += (rq*la)%mod * power(3,lq+rq-1)%mod;
        if(rq&&lq) ans += (rq*lq)%mod * power(3,lq+rq-2)%mod;
    }
    ans %= mod;
    la += s[i] == 'a';
    lc += s[i] == 'c';
    lq += s[i] == '?';
}
cout<<ans;

}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
