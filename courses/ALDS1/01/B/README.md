### ALDS1_1_B

# 最大公約数

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/1/ALDS1_1_B)


## 発想

  最大公約数を出力する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}

int main() {

    int x, y;
    cin >> x >> y;

    cout << gcd(x, y) << endl;

    return 0;

}
```
