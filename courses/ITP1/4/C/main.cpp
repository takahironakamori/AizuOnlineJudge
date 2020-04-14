#include <bits/stdc++.h>
using namespace std;

int main() {

  bool flg = true;

  while (flg) {

    int a, b;
    string op;
    cin >> a >> op >> b;

    if (op == "?"){
      flg = false;
      break;
    } else {
      if (op == "+") {
        cout << a + b << endl;
      } else if (op == "-") {
        cout << a - b << endl;
      } else if (op == "*") {
        cout << a * b << endl;
      } else {
        cout << a / b << endl;
      }
    }

  }

  return 0;

}
