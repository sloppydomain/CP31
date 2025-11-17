#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    // cin >> tt;
    while (tt--) {
        long long n;
        cin >> n;
        cout << ((n & 1) ? 2 * (n / 2 + 1) * (n / 2 + 2) : (n / 2 + 1) * (n / 2 + 1)) << '\n'; 
    }
    return 0;
}