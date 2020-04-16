### ITP1_4_B

# 円の面積と円周

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/4/ITP1_4_B)


## 発想

  直径は π × 直径、面積は、半径 × 半径 × π を出力する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  double r;
  cin >> r;

  printf("%.6f", r * r * M_PI);
  printf(" ");
  printf("%.6f", 2 * r * M_PI);
  printf("\n");

  return 0;

}
```
