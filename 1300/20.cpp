#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n, x, m;
        cin >> n >> x >> m;
        int l = x, r = x;
        for (int i = 0; i < m; i++) {
            int ll, rr;
            cin >> ll >> rr;
            if (ll <= l && r <= rr) {
                l = min(l, ll);
                r = max(r, rr);
            } else if (ll <= l && rr >= l) {
                l = min(l, ll);
            } else if (rr >= r && ll <= r) {
                r = max(r, rr);
            }
        }
        cout << r - l + 1 << '\n';
    }
    return 0;
}


 