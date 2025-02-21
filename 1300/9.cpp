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
        map<int, int> bit;
        vector<vector<int>> a(n);
        for (int i = 0; i < n; i++) {
            int h;
            cin >> h;
            for (int j = 0; j < h; j++) {
                int w;
                cin >> w;
                a[i].push_back(w);
                bit[w] += 1;
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < (int) a[i].size(); j++) {
                if (bit[a[i][j]] == 1) {
                    ans += 1;
                    break;
                }
            }
        }
        cout << (ans == n ? "No\n" : "Yes\n");
    }
    return 0;
}