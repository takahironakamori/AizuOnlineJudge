### ITP1_2_B

# 範囲

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/2/ITP1_2_B)


## 発想

  a < b かつ b < c の場合はYesを出力する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int a, b, c;
  cin >> a >> b >> c;

  if (a < b && b < c) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;

}
```
