#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    // cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> b(n), pb(n + 1);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            pb[b[i]] = i;
        }
        int mx = -1;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            mx = max(mx, pb[a[i]]);
            if (mx > pb[a[i]]) {
                ans += 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}