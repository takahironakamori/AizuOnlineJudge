### ITP1_3_A

# 複数の Hello World の出力

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/3/ITP1_3_A)


## 発想

  for文で1000回出力を繰り返す。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  for (int i = 0; i < 1000; i++) {
    cout << "Hello World" << endl;
  }

  return 0;

}
```
