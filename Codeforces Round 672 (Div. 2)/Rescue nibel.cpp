#include <bits/stdc++.h>

#define fi first
#define se second

using namespace std;

const int N=4*1e5+5;
const long long module=998244353;

pair<int, int> a[N];
long long gt[N];

long long _power(long long x, long long n)
{
	if (!n) return 1;
	
	long long r=_power(x, n/2);r=r*r%module;
	if (n%2) r=r*x%module;
	return r;
}

long long Cnk(int n, int k)
{
	if (n<k) return 0;
	long long r=gt[n]*_power(gt[n-k]*gt[k]%module, module-2) % module;
	return r;
}

void solve()
{
	int n, k;
	cin>>n>>k;
	for (int i=1;i<=n;i++) cin>>a[i].fi>>a[i].se;
	sort(a+1, a+1+n);
	
	gt[0]=1;
	for (int i=1;i<=n;i++) gt[i]=gt[i-1]*(long long)i%module;
	
	priority_queue <int, vector<int>, greater<int> > h;
	
	long long r=0;
	for (int i=1;i<=n;i++)
	{
		if (!h.empty()) while (h.top()<a[i].fi) 
		{
			h.pop();
			if (h.empty()) break;
		}
		r=(r+Cnk(h.size(), k-1)) % module;
		h.push(a[i].se);
	}
	cout<<r;
}

int main()
{

	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	
	int t=1;//cin>>t;
	while (t--) solve();
	
	return 0;
}