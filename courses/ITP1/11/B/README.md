### ITP1_11_B

# サイコロ II

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/11/ITP1_11_B)


## 発想

  サイコロの上面を合わしてから前面を合わせて、右側の数を表示する。


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

int main() {

  Dice d;

  for (int i = 0; i < 6; i++) {
      cin >> d.s[i];
  }

  int q;
  cin >> q;

  for (int i = 0; i < q; i++) {
    int ue, mae;
    cin >> ue >> mae;
    if (d.left() == ue) {
        d.roll('E');
    }
    if (d.right() == ue) {
        d.roll('W');
    }
    while (d.top() != ue) {
        d.roll('N');
    }
    while (d.front() != mae) {
        d.roll('R');
    }
    cout << d.right() << endl;
  }

  return 0;

}
```
