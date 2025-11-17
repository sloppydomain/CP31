#include <bits/stdc++.h>
using namespace std;

pair<long long, long long> dfs(int u, const vector<vector<int>> &g, const string &s, long long &ans) {
    pair<long long, long long> bw = {0, 0};
    if (s[u - 1] == 'W') {
        bw.first += 1;
    } else {
        bw.second += 1;
    }
    for (auto &v : g[u]) {
        pair<long long, long long> bw_ = dfs(v, g, s, ans);
        bw.first += bw_.first;
        bw.second += bw_.second;
    }
    if (bw.first == bw.second) ans += 1;
    return bw;
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
        vector<vector<int>> g(n + 1);
        vector<int> p(n + 1, -1);
        for (int i = 1; i < n; i++) {
            int a;
            cin >> a;
            g[a].push_back(i + 1);
            p[i + 1] = a;
        }
        string s;
        cin >> s;
        int root = -1;
        for (int i = 1; i <= n; i++) {
            if (p[i] == -1) root = i;
        }
        long long ans = 0;
        dfs(root, g, s, ans);
        cout << ans << '\n';
    }
    return 0;
}