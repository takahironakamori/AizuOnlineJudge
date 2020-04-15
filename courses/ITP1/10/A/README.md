### ITP1_10_A

# 距離

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/10/ITP1_10_A)


## 発想

  2点間の距離を計算する。<br>
  絶対値の計算を個別で先にした方がバグになりにくい。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  double x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;

  double dx = abs(x1 - x2);
  double dy = abs(y1 - y2);

  double ans = dx * dx + dy * dy;
  ans = sqrt(ans);

  printf("%.8f", ans);
  printf("\n");

  return 0;

}
```
