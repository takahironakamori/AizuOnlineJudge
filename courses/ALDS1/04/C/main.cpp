#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  set<string> st;
  vector<string> answer;
  for (int i = 0; i < n; i++) {
    string command, value;
    cin >> command >> value;
    if (command == "insert") {
      st.insert(value);
    } else if (command == "find") {
      if (st.find(value) != st.end()) {
        cout << "yes" << endl;
      } else {
        cout << "no" << endl;
      }
    }
  }

  return 0;

}
