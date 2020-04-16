### ITP1_7_C

# 表計算

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/7/ITP1_7_C)


## 発想

  二次元配列を利用する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int r, c;
  cin >> r >> c;

  vector<vector<int>> rc(r + 1, vector<int>(c + 1));

  for (int i = 0; i < r; i++) {
    int c_ = 0;
    for (int j = 0; j < c; j++) {
      cin >> rc[i][j];
      c_ += rc[i][j];
    }
    rc[i][c] = c_;
  }

  for (int i = 0; i < c + 1; i++) {
    int r_ = 0;
    for (int j = 0; j < r; j++) {
      r_ += rc[j][i];
    }
    rc[r][i] = r_;
  }

  for (int i = 0; i < r + 1; i++) {
    for (int j = 0; j < c + 1; j++) {
      cout << rc[i][j];
      if (j != c) {
        cout << " ";
      }
    }
    cout << endl;
  }

  return 0;

}
```
