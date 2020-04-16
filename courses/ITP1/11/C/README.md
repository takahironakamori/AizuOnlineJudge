### ITP1_11_C

# サイコロ III

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/11/ITP1_11_C)


## 発想

  サイコロを回しながら同じか否かをチェックする。<br>


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

struct Dice {
    int s[6];
    void roll (char c) {
        int b;
        if (c == 'E') {
            b = s[0];
            s[0] = s[3];
            s[3] = s[5];
            s[5] = s[2];
            s[2] = b;
        }
        if (c == 'W') {
            b = s[0];
            s[0] = s[2];
            s[2] = s[5];
            s[5] = s[3];
            s[3] = b;
        }
        if (c == 'N') {
            b = s[0];
            s[0] = s[1];
            s[1] = s[5];
            s[5] = s[4];
            s[4] = b;
        }
        if (c == 'S') {
            b = s[0];
            s[0] = s[4];
            s[4] = s[5];
            s[5] = s[1];
            s[1] = b;
        }
        if (c == 'R') {
            b = s[1];
            s[1] = s[2];
            s[2] = s[4];
            s[4] = s[3];
            s[3] = b;
        }
    }
    int top () {
        return s[0];
    }
    int front () {
        return s[1];
    }
    int left () {
        return s[3];
    }
    int right () {
        return s[2];
    }
};

bool f(Dice a, Dice b) {
    for (int i = 0; i < 6; i++) {
        if (a.s[i] != b.s[i]) {
            return false;
        }
    }
    return true;
}

int main() {

  Dice d1, d2;

  for (int i = 0; i < 6; i++) {
      cin >> d1.s[i];
  }

  for (int i = 0; i < 6; i++) {
      cin >> d2.s[i];
  }

  string answer = "No";

  for (int i = 0; i < 4; i++) {
      d2.roll('R');
      for (int j = 0; j < 4; j++) {
          d2.roll('N');
          if (f(d1, d2)) {
              answer = "Yes";
          }
      }
  }

  d2.roll('E');
  for (int i = 0; i < 4; i++) {
    d2.roll('N');
    if (f(d1, d2)) {
      answer = "Yes";
    }
  }

  d2.roll('W');
  d2.roll('W');
  for (int i = 0; i < 4; i++) {
    d2.roll('N');
    if (f(d1, d2)) {
      answer = "Yes";
    }
  }

  cout << answer << endl;

  return 0;

}
```
