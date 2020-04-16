#include <bits/stdc++.h>
using namespace std;

int main() {

  while (1) {

    string s;
    cin >> s;

    if (s == "0") {
      return 0;
    }

    int answer = 0;

    for (int i = 0; i < s.size(); i++) {
      answer  += (s[i] - '0');
    }

    cout << answer << endl;

  }

  return 0;

}
