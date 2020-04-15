### ITP1_10_B

# 三角形

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/10/ITP1_10_B)


## 発想

  ２辺と夾角から、三角形の面積、周囲の長さ、高さを計算します。<br>
  計算方法は[こちら](https://keisan.casio.jp/exec/system/1161228784)<br>


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  double a, b, c;
  cin >> a >> b >> c;

  double area = a * b * sin(c * M_PI/180) / 2;
  double l = sqrt(a * a + b * b - 2 * a * b * cos(c * M_PI / 180)) + a + b;
  double h = b * sin(c * M_PI / 180);

  printf("%.8f", area);
  printf("\n");

  printf("%.8f", l);
  printf("\n");

  printf("%.8f", h);
  printf("\n");

  return 0;

}
```
