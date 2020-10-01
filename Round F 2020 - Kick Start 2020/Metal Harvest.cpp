/*
2
3 5
1 5
10 11
8 9
3 2
1 2
3 5
13 14


Case #1: 2
Case #2: 3
 */

#include<bits/stdc++.h>

using namespace std;

int main() {

  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  auto solve = [&] () {
    int n, k;
    cin >> n >> k;
    vector <pair <int, int> > e;
    for (int i = 0; i < n; i++) {
      int l, r;
      cin >> l >> r;
      e.push_back({l, r});
    }
    sort(e.begin(), e.end());
    int last = 0;
    int ans = 0;
    for (int i = 0; i < n; i++) {
      e[i].first = max(e[i].first, last);
      if (e[i].first < e[i].second) {
        int ret = (e[i].second - e[i].first + k - 1) / k;
        ans += ret;
        last = e[i].first + ret * k;
      }
    }
    cout << ans;
  };
  for (int tc = 1; tc <= t; tc++) {
    cout << "Case #" << tc << ": ";
    solve();
    cout << '\n';
  }
}
