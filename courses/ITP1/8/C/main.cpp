#include <bits/stdc++.h>
using namespace std;

int main() {

  string s;
  vector<int> count(26);

  while (getline(cin, s)) {
    for (int i = 0; i < s.size(); i++) {
      int v = (int) s[i];
      if (65 <= v && v <= 90) {
        count[(v - 65)]++;
      } else if (97 <= v && v <= 122) {
        count[(v - 97)]++;
      }
    }
  }

  for (int i = 0; i < 26; i++) {
    cout << char(i + 97) << " : " << count[i] << endl;
  }

  return 0;

}
