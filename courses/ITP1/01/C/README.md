### ITP1_1_C

# 長方形の面積と周の長さ

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/1/ITP1_1_C)


## 発想

  面積は a × b、周の長さは 2a + 2b となる。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int a, b;
  cin >> a >> b;

  cout << a * b << " " << a + a + b + b << endl;

  return 0;

}
```
