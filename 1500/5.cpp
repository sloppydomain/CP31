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
    vector<int64_t> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    vector<int64_t> b(n);
    vector<int64_t> pb(n + 1);
    for (int i = 0; i < n; i++) {
      cin >> b[i];
      pb[i + 1] = pb[i] + b[i];
    }
    vector<int64_t> c(n + 1), d(n + 1);
    for (int i = 0; i < n; i++) {   
      int j = upper_bound(pb.begin(), pb.end(), a[i] + pb[i]) - pb.begin();
      c[i]++;
      c[j - 1]--;
      d[j - 1] += a[i] - (pb[j - 1] - pb[i]);   
    }
    for (int i = 0; i < n; i++) {
      if (i > 0) {
        c[i] += c[i - 1];
      }
      cout << c[i] * b[i] + d[i] << " \n"[i == n - 1];
    }
  }
  return 0;
}