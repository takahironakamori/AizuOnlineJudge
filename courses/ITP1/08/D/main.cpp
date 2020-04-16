#include <bits/stdc++.h>
using namespace std;

int main() {

  string s_;
  string q;
  cin >> s_ >> q;

  string s = s_ + s_;

  if (s.find(q) == -1) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }

  return 0;

}
