#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n, k;
        cin >> n >> k;
        if (k >= n) {
            cout << "1\n";
        } else {
            int ans = n;
            for (int i = 1; i * i <= n; i++) {
                if (n % i == 0) {
                    if (i <= k) {
                        ans = min(ans, n / i);
                    }
                    if (n / i <= k) {
                        ans = min(ans, i);
                    }
                }
            }
            cout << ans << '\n';
        }
    }
    return 0;
}