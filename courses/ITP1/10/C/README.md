### ITP1_10_C

# 標準偏差

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/10/ITP1_10_C)


## 発想

  標準偏差を計算する。<br>


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  while (1) {

    int n;
    cin >> n;

    if (n == 0) {
      return 0;
    }

    vector<int> v(n);
    int sum = 0;

    for (int i = 0; i < n; i++) {
      cin >> v[i];
      sum += v[i];
    }

    double m = (double) sum / n;
    double sum2 = 0;

    for (int i = 0; i < n; i++) {
        double m_ = abs(v[i] - m);
        sum2 += m_ * m_;
    }

    printf("%.8f", sqrt(sum2 / n));
    printf("\n");

  }

  return 0;

}
```
