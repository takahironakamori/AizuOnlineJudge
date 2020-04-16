### ITP1_4_D

# 最小値、最大値、合計値

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/4/ITP1_4_D)


## 発想

  最小値、最大値は初期値に注意する。<br>
  合計はlong longで計算する。<br>


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  long long mx = 0 - 1LL<<60;
  long long mn = 1LL<<60;
  long long sum = 0;

  for (int i = 0; i < n; i++) {
    long long a;
    cin >> a;
    mn = min(mn, a);
    mx = max(mx, a);
    sum += a;
  }

  cout << mn << " " << mx << " " << sum << endl;

  return 0;

}
```
