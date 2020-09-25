#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

ll gcd(ll a, ll b) { for (; b; a %= b, swap(a, b)); return a; }

int n, q;
int a[300001];

ll ans = 0;
set <pair<pii, int> > st;

ll getAns()
{
	ll res = ans;
	if (st.size() == 1) return res;

	auto it = st.begin();
	if (it->second < next(it)->second) res += it->second;

	it = prev(st.end());
	if (it->second < prev(it)->second) res += it->second;

	return res;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int t; cin >> t;
	while (t--)
	{
		st.clear();
		ans = 0;

		cin >> n >> q;
		for (int i = 1; i <= n; i++) cin >> a[i];

		for (int i = 1; i <= n; i++)
		{
			if (n == 1)
			{
				st.insert({ {i, 1}, a[i] });
				ans += a[i];
				continue;
			}
			else if (i == 1 || i == n)
			{
				if (i == 1 && a[i] > a[i + 1] || i == n && a[i] > a[i - 1])
				{
					st.insert({ {i, 1}, a[i] });
					ans += a[i];
					continue;
				}
				else
				{
					st.insert({ {i, 0}, a[i] });
					ans -= a[i];
					continue;
				}
			}

			if (a[i - 1] < a[i] && a[i] > a[i + 1])
			{
				st.insert({ {i, 1}, a[i] });
				ans += a[i];
			}
			else if (a[i - 1] > a[i] && a[i] < a[i + 1])
			{
				st.insert({ {i, 0}, a[i] });
				ans -= a[i];
			}
		}

		cout << getAns() << '\n';

		while (q--)
		{
			int l, r; cin >> l >> r;
			if (l == r)
			{
				cout << getAns() << '\n';
				continue;
			}

			set <int> asdf;
			for (int i = max(1, l - 1); i <= min(n, l + 1); i++) asdf.insert(i);
			for (int i = max(1, r - 1); i <= min(n, r + 1); i++) asdf.insert(i);

			swap(a[l], a[r]);

			for (auto i : asdf)
			{
				auto it = st.lower_bound({ {i, 0}, 0 });
				if (it != st.end() && it->first.first == i)
				{
					if (it->first.second == 0) ans += it->second;
					else ans -= it->second;

					st.erase(it);
				}

				if (i == 1 || i == n)
				{
					if (i == 1 && a[i] > a[i + 1] || i == n && a[i] > a[i - 1])
					{
						st.insert({ {i, 1}, a[i] });
						ans += a[i];
						continue;
					}
					else
					{
						st.insert({ {i, 0}, a[i] });
						ans -= a[i];
						continue;
					}
				}

				if (a[i - 1] < a[i] && a[i] > a[i + 1])
				{
					st.insert({ {i, 1}, a[i] });
					ans += a[i];
				}
				else if (a[i - 1] > a[i] && a[i] < a[i + 1])
				{
					st.insert({ {i, 0}, a[i] });
					ans -= a[i];
				}
			}

			cout << getAns() << '\n';
		}
	}
}