### ITP1_7_A

# 成績

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/7/ITP1_7_A)


## 発想

  点数に応じて分岐する。<br>


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  while(1) {

    int m, f, r;
    cin >> m >> f >> r;

    if (m == -1 && f == -1 && r == -1) {
      return 0;
    }

    if (m == -1 || f == -1) {
      cout << "F" << endl;
    } else if (80 <= m + f) {
      cout << "A" << endl;
    } else if (65 <= m + f) {
      cout << "B" << endl;
    } else if (50 <= m + f) {
      cout << "C" << endl;
    } else if (30 <= m + f) {
      if (50 <= r) {
        cout << "C" << endl;
      } else {
        cout << "D" << endl;
      }
    } else {
      cout << "F" << endl;
    }
  }

  return 0;

}
```
