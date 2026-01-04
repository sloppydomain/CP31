#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt;
  cin >> tt;
  while (tt--) {
    int n, a, b;
    cin >> n >> a >> b;
    vector<int64_t> x(n + 1);
    for (int i = 1; i <= n; i++) {
      cin >> x[i];
    }
    vector<int64_t> p(n + 1);
    for (int i = 1; i <= n; i++) {
      p[i] = p[i - 1] + x[i];
    }
    int64_t ans = 1e18; 
    for(int i = 0; i <= n; i++) {
      ans = min(ans, (a + b) * x[i] + b * (p[n] - p[i] - (n - i) * x[i]));
    }
    cout << ans << '\n';
  }
  return 0;
}