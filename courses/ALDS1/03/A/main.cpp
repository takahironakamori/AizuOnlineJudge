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

  string s;
  getline(cin, s);

  vector<string> v = stringSplit(s, ' ');
  deque<string> que;

  for (int i = 0; i < v.size(); i++) {
    if (v[i] == "+" || v[i] == "-" || v[i] == "*") {
      string b_ = que.back();
      que.pop_back();
      string a_ = que.back();
      que.pop_back();
      int b = atoi(b_.c_str());
      int a = atoi(a_.c_str());
      if (v[i] == "+") {
        que.push_back(to_string(a + b));
      } else if (v[i] == "-") {
        que.push_back(to_string(a - b));
      } else {
        que.push_back(to_string(a * b));
      }
    } else {
      que.push_back(v[i]);
    }
  }

  string answer = que.front();
  que.pop_front();

  cout << answer << endl;

  return 0;
}
