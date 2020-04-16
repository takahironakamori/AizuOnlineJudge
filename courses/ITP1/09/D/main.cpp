#include <bits/stdc++.h>
using namespace std;

int main() {

  string str;
  cin >> str;

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {

    string s1;
    int start_, end_;
    cin >> s1 >> start_ >> end_;

    int count_ = end_ - start_ + 1;

    if (s1 == "replace") {
      string s_;
      cin >> s_;
      str = str.substr(0, start_) + s_ + str.substr(end_ + 1);
    } else if (s1 == "print"){
      cout << str.substr(start_, count_) << endl;
    } else {
      string s_ = str.substr(start_, count_);
      reverse(s_.begin(), s_.end());
      str = str.substr(0, start_) + s_ + str.substr(end_ + 1);
    }
  }

  return 0;

}
