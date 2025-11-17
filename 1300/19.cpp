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
        if (n % 2 == 0) {
            cout << n / 2 << " " << n / 2 << '\n';
        } else {
            int ans = -1;
            for (int nu = 2; nu <= min(n, 1000000); nu++) {
                if (n % nu == 0) {
                    ans = nu;
                    break;
                }
            }
            if (ans == -1) {
                cout << "1 " << n - 1 << '\n';
            } else {
                cout << n / ans << ' ' << n - n / ans << '\n';
            }
        }
    }
    return 0;
}