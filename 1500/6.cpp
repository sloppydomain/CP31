#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt = 1;
  // cin >> tt;
  while (tt--) {
    string s;
    int n;
    cin >> n >> s;
    long long pos = 0, neg = 0;
    for (int i = 0; i < n; i++) {
      pos += s[i] == '+';
      neg += s[i] == '-';
    }
    int q;
    cin >> q;
    while (q--) {
      long long a, b;
      cin >> a >> b;
      long long dif = b - a, tot = pos - neg;
      if (pos != neg && (dif == 0 || tot * b % dif != 0 || tot * b / dif > pos || tot * b / dif < -neg)) { 
        cout << "No\n";
      } else {
        cout << "Yes\n";
      }
    }
  }
  return 0;
}