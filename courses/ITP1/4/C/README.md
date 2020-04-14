### ITP1_4_C

# 計算機

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/4/ITP1_4_C)


## 発想

  op に応じて計算した結果を出力する。


## コード（C++）

```cpp
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
```
