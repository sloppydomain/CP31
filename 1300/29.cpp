#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<vector<int>> g(n);
  for (int i = 0; i < n - 1; i++) {
    int u, v;
    cin >> u >> v;
    --u, --v;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  vector<bool> vis(n, false);
  vector<vector<int>> c(2);
  auto dfs = [&](auto self, int u, int color) -> void {
    vis[u] = true;
    c[color].push_back(u);
    for (auto v : g[u]) {
      if (!vis[v]) {
        self(self, v, color ^ 1);
      }
    }
  };
  dfs(dfs, 0, 0);
  cout << c[0].size() * c[1].size() - n + 1 << '\n';
  return 0;
}