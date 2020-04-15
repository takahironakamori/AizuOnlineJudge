#include <bits/stdc++.h>
using namespace std;

int main() {

  string s;
  getline(cin, s);

  string answer = "";

  for (int i = 0; i < s.size(); i++) {
    int v = (int) s[i];
    if (65 <= v && v <= 90) {
      answer += char(v + 32);
    } else if (97 <= v && v <= 122) {
      answer += char(v - 32);
    } else {
      answer += v;
    }
  }

  cout << answer << endl;

  return 0;

}
