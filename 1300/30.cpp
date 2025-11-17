#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  double ans = 0, cur = 0;
  for (int i = 0; i < n; i++) {
    cur += a[i];
    if (i >= k) {
      cur -= a[i - k];
    }
    if (i >= k - 1) {
      ans += cur;
    }
  }
  cout << fixed << setprecision(8) << ans / double (n - k + 1) << '\n';
  return 0;
}