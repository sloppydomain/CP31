#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  int n = s.size();
  for (int i = 1; i < n; i++) {
    if (s[i] == s[i - 1]) {
      for (char c = 'a'; c <= 'z'; c++) {
        if (i < n - 1) {
          if (c != s[i - 1] && c != s[i + 1]) {
            s[i] = c;
            break;
          }
        } else {
          if (c != s[i - 1]) {
            s[i] = c;
            break;
          }
        }
      }
    }
  }
  cout << s << '\n';
  return 0;
}