#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n, W;
        cin >> n >> W;
        vector<int> w(n), bit(32, 0);
        for (int i = 0; i < n; i++) {
            cin >> w[i];
            for (int j = 0; j < 32; j++) {
                if ((1 << j) & w[i]) bit[j] += 1;
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int cap = W;
            for (int j = 31; j >= 0; j--) {
                if (bit[j] > 0) {
                    int h = min(bit[j], cap / (1 << j));
                    cap -= h * (1 << j);
                    bit[j] -= h;
                }  
            }
            if (cap == W) {
                break;
            }
            ans += 1;
        }
        cout << ans << '\n';
    }
    return 0;
}