#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt;
  cin >> tt;
  const int N = 40000;
  const int inf = 1e9 + 7;
  auto good = [&](int n) {
    vector<int> d;
    while (n) {
      d.push_back(n % 10);
      n /= 10;
    }
    int i = 0, j = int (d.size()) - 1;
    while (i < j) {
      if (d[i] != d[j]) return false;
      i++;
      j--;
    }
    return true;
  };
  vector<int> a;
  for (int i = 1; i <= N; i++) {
    if (good(i)) {
      a.push_back(i);
    }
  }
  int m = a.size();
  vector<vector<int>> dp(m + 1, vector<int>(N + 1));
  dp[0][0] = 1;
  for (int i = 1; i <= m; i++) {
    for (int j = 0; j <= N; j++) {
      dp[i][j] = dp[i - 1][j];
      if (j - a[i - 1] >= 0) {
        dp[i][j] = (dp[i][j] + dp[i][j - a[i - 1]]) % inf;
      }
    }
  }
  while (tt--) {
    int sum;
    cin >> sum;
    cout << dp[m][sum] << '\n';
  }
  return 0;
}