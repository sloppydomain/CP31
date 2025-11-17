#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n, m;
        cin >> n >> m;
        vector<int> k(n);
        for (int i = 0; i < n; i++) {
            cin >> k[i];
        }
        vector<int> c(m);
        for (int i = 0; i < m; i++) {
            cin >> c[i];
        }
        sort(k.rbegin(), k.rend());
        int j = 0;
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            if (j <= k[i] - 1) {
                ans += c[j];
                j += 1;
            } else {
                ans += c[k[i] - 1];
            }
        }
        cout << ans << '\n';
    }
    return 0;
}