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
        long long tot = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            tot += a[i];
        }
        long long mx = LLONG_MIN;
        long long sum = 0;
        for (int i = 0; i < n - 1; i++) {
            if (sum < 0) sum = 0;
            sum += a[i];
            mx = max(mx, sum);
        }
        sum = 0;
        for (int i = 1; i < n; i++) {
            if (sum < 0) sum = 0;
            sum += a[i];
            mx = max(mx, sum);
        }
        cout << (tot > mx ? "Yes\n" : "No\n");
    }
    return 0;
}