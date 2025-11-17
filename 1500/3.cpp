#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> dp(n + 1, 0);
        for (int i = n - 1; i >= 0; i--) {
            if (i + a[i] >= n) {
                dp[i] = dp[i + 1] + 1;
            } else {
                dp[i] = min(dp[i + 1] + 1, dp[i + a[i] + 1]);
            }
        }
        cout << dp[0] << '\n';
    }
    return 0;
}