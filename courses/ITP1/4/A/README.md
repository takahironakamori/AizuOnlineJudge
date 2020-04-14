### ITP1_4_A

# 割り算

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/4/ITP1_4_A)


## 発想

  小数点の出力はprintfを使った方がいいかもしれない。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int a, b;
  cin >> a >> b;

  cout << a / b << " " << a % b << " ";

  printf("%.6f", (double) a / b);
  printf("\n");

  return 0;

}
```
