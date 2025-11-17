#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, h;
  cin >> n >> h;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int low = 1, high = n;
  while (low < high) {
    int mid = low + (high - low + 1) / 2;
    bool ok = true;
    vector<int> b;
    for (int i = 0; i < mid; i++) {
      b.push_back(a[i]);
    }
    sort(b.rbegin(), b.rend());
    int have = h;
    for (int i = 0; i < mid; i += 2) {
      if (b[i] <= have) {
        have -= b[i];
      } else {
        ok = false;
      }
    }
    if (ok) {
      low = mid;
    } else {
      high = mid - 1;
    }
  } 
  cout << low << '\n';
  return 0;
}