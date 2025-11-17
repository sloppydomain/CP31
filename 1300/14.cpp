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
        vector<int> b(31);
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            for (int j = 0; j < 31; j++) {
                if ((1 << j) & a) b[j] += 1;
            }
        }
        vector<int> ans;
        for (int k = 1; k <= n; k++) {
            bool ok = true;
            for (int j = 0; j < 31; j++) {
                if (b[j] % k != 0) ok = false;
            }
            if (ok) ans.push_back(k);
        }
        for (auto &x : ans) cout << x << " ";
        cout << '\n';
    }
    return 0;
}