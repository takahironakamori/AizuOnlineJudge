### ITP1_11_A

# サイコロ I

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/11/ITP1_11_A)


## 発想

  サイコロを構造体で作る。<br>


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
    }
    int top () {
        return s[0];
    }
};

int main() {

  Dice d;

  for (int i = 0; i < 6; i++) {
      cin >> d.s[i];
  }

  string s;
  cin >> s;

  for (int i = 0; i < s.size(); i++) {
      d.roll(s[i]);
  }

  cout << d.top() << endl;

  return 0;

}
```
