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
        sort(a.begin(), a.end());
        int l = 0, r = n - 1;
        long long x = 0, ans = 0;
        while (l <= r) {
            if (l == r) {
                if (a[l] == 1) {
                    ans += 1;
                } else {
                    ans += 1 + (a[l] - x + 1) / 2;
                }
                l += 1;
            } else {
                if (x + a[l] > a[r]) {
                    ans += a[r] - x;
                    a[l] -= a[r] - x;
                    x += a[r] - x;
                    if (x == a[r]) {
                        r -= 1;
                        ans += 1;
                        x = 0;
                    }
                } else {
                    ans += a[l];
                    x += a[l];
                    l += 1;
                    if (x == a[r]) {
                        r -= 1;
                        ans += 1;
                        x = 0;
                    }
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}