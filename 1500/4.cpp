#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> a(n), p(n + 1);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      p[i + 1] = p[i] ^ a[i];
    }
    string s;
    cin >> s;
    vector<int> x(2);
    for (int i = 0; i < n; i++) {
      x[s[i] - '0'] ^= a[i];
    }
    int q;
    cin >> q;
    while (q--) {
      int tp;
      cin >> tp;
      if (tp == 1) {
        int l, r;
        cin >> l >> r;
        x[0] ^= p[r] ^ p[l - 1];
        x[1] ^= p[r] ^ p[l - 1];
      } else {
        int g;
        cin >> g;
        cout << x[g] << ' ';
      }
    }
    cout << '\n';
  }
  return 0;
}