### ITP1_2_D

# 長方形の中の円

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/2/ITP1_2_D)


## 発想

  下記の条件をすべて満たしたらYesとなる。<br>
  x + r が W 以下であること。<br>
  y + r が H 以下であること。<br>
  x - r が 0 以上であること。<br>
  y - r が 0 以上であること。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int W, H, x, y, r;
  cin >> W >> H >> x >> y >> r;

  if (x + r <= W && y + r <= H && 0 <= x - r && 0 <= y - r) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;

}
```
