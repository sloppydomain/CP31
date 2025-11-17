#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        long long k, x;
        cin >> k >> x;
        long long l = 1, r = 2 * k - 1;
        long long ans = -1;
        while (l <= r) {
            long long m = (l + (r - l) / 2);
            long long tot = min(m, k) * (min(m, k) + 1) / 2;
            if (m > k) {
                long long r = m - k;
                tot += r * k - r * (r + 1) / 2;
            }
            if (tot < x) {
                ans = m;
                l = m + 1;
            } else {
                r = m - 1;
            }
        }
        if (ans + 1 <= 2 * k - 1) {
            ans = ans + 1;
        }
        cout << max(1LL, ans) << '\n';
    }
    return 0;
}