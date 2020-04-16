### ITP1_11_D

# サイコロ IV

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/11/ITP1_11_D)


## 発想

  複数のサイコロをfor文で全部確認する。<br>


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

  int n;
  cin >> n;

  vector<Dice> d(n);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 6; j++) {
        cin >> d[i].s[j];
    }
  }

  string answer = "Yes";

  for (int k = 0; k < n-1; k++) {
    for (int l = k + 1; l < n; l++) {

        bool check = false;

        for (int i = 0; i < 4; i++) {
            d[l].roll('R');
            for (int j = 0; j < 4; j++) {
                d[l].roll('N');
                if (f(d[k], d[l])) {
                    check = true;
                }
            }
        }

        d[l].roll('E');
        for (int i = 0; i < 4; i++) {
            d[l].roll('N');
            if (f(d[k], d[l])) {
                check = true;
            }
        }

        d[l].roll('W');
        d[l].roll('W');
        for (int i = 0; i < 4; i++) {
            d[l].roll('N');
            if (f(d[k], d[l])) {
                check = true;
            }
        }

        if (check) {
            answer = "No";
        }

    }
  }

  cout << answer << endl;

  return 0;

}
```
