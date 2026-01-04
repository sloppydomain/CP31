#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt;
  cin >> tt;
  while (tt--) {
    int64_t n;
    cin >> n;
    vector<int64_t> p;
    int64_t f = 1;
    for (int i = 1; f * i <= n; i++) {
      f = f * i;
      p.push_back(f);
    }
    int m = p.size();
    int ans = __builtin_popcountll(n);
    for (int64_t i = 0; i < (1 << m); i++) {
      int64_t cur = 0;
      for (int64_t j = 0; j < m; j++) {
        if ((1 << j) & i) {
          cur += p[j];
        }
      }
      ans = min(ans, __builtin_popcountll(i) + __builtin_popcountll(n - cur));
    }
    cout << ans << '\n';
  }
  return 0;
}