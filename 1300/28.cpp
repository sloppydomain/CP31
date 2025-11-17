#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<pair<int, int>> a(n);
  int64_t tot = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i].first;
    a[i].second = i;
    tot += a[i].first;
  }
  sort(a.begin(), a.end());
  vector<int> ans;
  for (int i = 0; i < n; i++) {
    int64_t r = tot - a[i].first;
    int end;
    if (i < n - 1) {
      end = n - 1;
    } else {
      end = n - 2;
    }
    if (2 * a[end].first == r) {
      ans.push_back(a[i].second);
    }
  }
  cout << ans.size() << '\n';
  for (int x : ans) {
    cout << x + 1 << ' ';
  }
  cout << '\n';
  return 0;
}