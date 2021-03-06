#include <bits/stdc++.h>
using namespace std;

vector<string> stringSplit(const string &str, char sep) {
  vector<string> v;
  stringstream ss(str);
  string buffer;
  while (getline(ss, buffer, sep)) {
    v.push_back(buffer);
  }
  return v;
}

int main() {

  string W;
  cin >> W;

  string s;
  map<string, int> mp;

  while (getline(cin, s)) {
    if (s == "END_OF_TEXT") {
      break;
    } else {
      vector<string> v = stringSplit(s, ' ');
      for (int i = 0; i < v.size(); i++) {
        string s_ = "";
        for (int j = 0; j < v[i].size(); j++) {
          int v_ = (int) v[i][j];
          if (65 <= v_ && v_ <= 90) {
            s_ += char(v_ + 32);
          } else if (97 <= v_ && v_ <= 122) {
            s_ += v_;
          }
        }
        mp[s_]++;
      }
    }
  }

  cout << mp[W] << endl;

  return 0;

}
