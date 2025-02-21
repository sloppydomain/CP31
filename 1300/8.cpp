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
        for (int i = 0; i < n; i++) {
            int l = 0, r = i;
            while (l <= r) {
                int m = (l + (r - l) / 2);
                if (a[m] >= i - m + 1) {
                    r = m - 1;
                } else {
                    l = m + 1;
                }
            }
            cout << i - r << " \n"[i == n - 1];
        }
    }
    return 0;
}