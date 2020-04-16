#include <bits/stdc++.h>
using namespace std;

int main() {

  while (1) {

    string s;
    cin >> s;

    if (s == "-") {
      return 0;
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++) {
      int h;
      cin >> h;
      string s_ = s.substr(0, h);
      string b_ = s.substr(h, s.size() - h);
      s = b_ + s_;
    }

    cout << s << endl;

  }

  return 0;

}
