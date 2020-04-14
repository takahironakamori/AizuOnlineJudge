### ITP1_1_D

# 時計

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/1/ITP1_1_D)


## 発想

  秒を3600で割ったものが時間、その余りを60で割ったものが分、さらにその余りが秒となる。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int S;
  cin >> S;

  int h = S / 3600;
  S = S % 3600;
  int m = S / 60;
  S = S % 60;

  cout << h << ":" << m << ":" << S << endl;

  return 0;

}
```
