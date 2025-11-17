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
        vector<int> d;
        for (int i = 2; i * i <= n; i++) {
            while (n % i == 0) {
                d.push_back(i);
                n /= i;
            }
        }
        if (n != 1) {
            d.push_back(n);
        }
        long long a = 1, b = 1, c = 1;
        for (auto x : d) {
            if (a == 1) {
                a *= x;
            } else if (b == 1 || a == b) {
                b *= x;
            } else {
                c *= x;
            }
        }
        if (a == 1 || b == 1 || c == 1 || a == b || b == c || a == c) {
            cout << "No\n";
        } else {
            cout << "Yes\n";
            cout << a << ' ' << b << ' ' << c << '\n';
        }
    }
    return 0;
}