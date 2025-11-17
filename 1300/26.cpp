#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    // cin >> tt;
    while (tt--) {
        string s;
        cin >> s;
        int n = s.length();
        vector<int> pr(n + 1, 0);
        int v1 = 0;
        for (int i = 1; i <= n; i++) {
            if (s[i - 1] == 'v') {
                v1 += 1;
                pr[i] += pr[i - 1];
            } else {
                pr[i] += pr[i - 1] + (v1 - 1 >= 0 ? v1 - 1 : 0);
                v1 = 0;
            }
        }
        vector<int> su(n + 1, 0);
        int v2 = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == 'v') {
                v2 += 1;
                su[i] += su[i + 1];
            } else {
                su[i] += su[i + 1] + (v2 - 1 >= 0 ? v2 - 1 : 0);
                v2 = 0;
            }
        }
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'o') {
                ans += 1LL * pr[i + 1] * su[i];
            }
        }
        cout << ans << '\n';
    }
    return 0;
}