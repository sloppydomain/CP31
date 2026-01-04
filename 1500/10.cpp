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
    int n;
    cin >> n;
    vector<int> a(n);
    int tot = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      tot ^= a[i];
    }
    int cur = 0;
    bool ans = false;
    for (int i = 0; i < n; i++) {
      cur ^= a[i];
      if (cur == (tot ^ cur)) {
        ans = true;
      } else if ((tot ^ cur) == 0) {
        int new_cur = 0;
        for (int j = i + 1; j < n; j++) {
          new_cur ^= a[j];
          if (new_cur == cur) {
            ans = true;
          }
        }
      }
      if (ans) break;
    }
    cout << (ans ? "Yes\n" : "No\n");
  }
  return 0;
}