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
        vector<int> bit(31);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            for (int j = 0; j < 31; j++) {
                if ((1 << j) & x) {
                    bit[j] += 1;
                }
            }
        }
        long long ans = 0;
        for (int i = 30; i >= 0; i--) {
            if (n - bit[i] <= k) {
                ans += (1 << i);
                k -= (n - bit[i]);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}