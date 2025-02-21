#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        int ans;
        cin >> ans;
        const int mx = 1e6;
        bool ok = false;
        for (long long n = 2; n <= 1000; n++) {
            long long tot = 1 + n + n * n;
            if (tot == ans) ok = true;
            long long last = n * n;
            for (int m = 3; m <= 20; m++) {
                tot += last * n;
                last *= n;
                if (last > mx || tot > mx) break;
                if (tot == ans) ok = true;
            }
        }
        cout << (ok ? "Yes\n" : "No\n");
    }
    return 0;
}