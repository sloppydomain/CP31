#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<array<int, 2>> ab(n);
        for (int i = 0; i < n; i++) {
            cin >> ab[i][1];
            int mx = -1;
            for (int j = 0; j < ab[i][1]; j++) {
                int x;
                cin >> x;
                if (mx < x + 1 - j) {
                    mx = x + 1 - j;
                }
            }
            ab[i][0] = mx;
        }
        sort(ab.begin(), ab.end());
        int l = 1, r = 1e9 + 1;
        int ans = -1; 
        while (l <= r) {
            int m = (l + (r - l) / 2);
            int tot = m;
            bool ok = true;
            for (auto &e : ab) {
                if (tot < e[0]) {
                    ok = false;
                    break;
                }
                tot += e[1];
            }
            if (ok) {
                ans = m;
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}