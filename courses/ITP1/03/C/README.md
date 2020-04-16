### ITP1_3_C

# 2つの数の交換

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/3/ITP1_3_C)


## 発想

  まず、小さい方を出力し、次に大きい方を出力する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  while (1) {
    int x, y;
    cin >> x >> y;
    if (x == 0 && y == 0){
      return 0;
    } else {
      cout << min(x,y) << " " << max(x,y) << endl;
    }
  }

  return 0;

}
```
