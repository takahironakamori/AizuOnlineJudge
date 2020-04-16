#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<bool> s(13);
  vector<bool> h(13);
  vector<bool> c(13);
  vector<bool> d(13);

  for (int i = 0; i < n; i++) {
    string t;
    int v;
    cin >> t >> v;
    --v;
    if (t == "S") {
      s[v] = true;
    } else if (t == "H") {
      h[v] = true;
    } else if (t == "C") {
      c[v] = true;
    } else {
      d[v] = true;
    }
  }

  for (int i = 0; i < 13; i++) {
    if (s[i] == false) {
      cout << "S " << i + 1 << endl;
    }
  }

  for (int i = 0; i < 13; i++) {
    if (h[i] == false) {
      cout << "H " << i + 1 << endl;
    }
  }

  for (int i = 0; i < 13; i++) {
    if (c[i] == false) {
      cout << "C " << i + 1 << endl;
    }
  }

  for (int i = 0; i < 13; i++) {
    if (d[i] == false) {
      cout << "D " << i + 1 << endl;
    }
  }

  return 0;

}
