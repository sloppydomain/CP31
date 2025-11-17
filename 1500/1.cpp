#include <bits/stdc++.h>
using namespace std;

long long ms(vector<int>& e, int l, int r) {
    if (l >= r) return 0;
    int m = (l + (r - l) / 2);
    long long ans = 0;
    ans += ms(e, l, m);
    ans += ms(e, m + 1, r);
    int i = l, j = m + 1;
    vector<int> t;
    while (i <= m && j <= r) {
        if (e[i] <= e[j]) {
            t.push_back(e[i++]);
        } else {
            ans += (m - i + 1);
            t.push_back(e[j++]);
        }
    }
    while (i <= m) {
        t.push_back(e[i++]);
    }
    while (j <= r) {
        t.push_back(e[j++]);
    }
    for (int k = l; k <= r; k++) {
        e[k] = t[k - l];
    }
    return ans;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<pair<int, int>> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i].first >> p[i].second;
        }
        sort(p.begin(), p.end());
        vector<int> e(n);
        for (int i = 0; i < n; i++) {
            e[i] = p[i].second;
        }
        cout << ms(e, 0, n - 1) << '\n';
    }
    return 0;
}