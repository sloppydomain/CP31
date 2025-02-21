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
        vector<array<int, 2>> p;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i + 1 > a[i]) {
                p.push_back({a[i], i + 1});
            }
        }
        sort(p.begin(), p.end());
        int m = p.size();
        long long ans = 0;
        for (int i = 0; i < m; i++) {
            int l = i + 1, r = m - 1;
            while (l <= r) {
                int mid = (l + (r - l) / 2);
                if (p[mid][0] > p[i][1]) {
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
            ans += m - 1 - r;
        }
        cout << ans << '\n';
    }
    return 0;
}