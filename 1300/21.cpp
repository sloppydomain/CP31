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
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (i == 0 || i == n - 1) {
                ans.push_back(a[i]);
            } else if ((a[i - 1] < a[i] && a[i] > a[i + 1]) || (a[i - 1] > a[i] && a[i + 1] > a[i])) {
                ans.push_back(a[i]);
            }
        }
        cout << ans.size() << '\n';
        for (auto& x : ans) cout << x << ' ';
        cout << '\n';
    }
    return 0;
}