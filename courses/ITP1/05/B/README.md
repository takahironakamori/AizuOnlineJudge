### ITP1_5_B

# フレームの描画

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/5/ITP1_5_B)


## 発想

  外周の場合は # を、それ以外の場合は . を出力する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  while(1) {

    int H, W;
    cin >> H >> W;

    if (H == 0 && W == 0) {
      return 0;
    }

    for (int i = 0; i < H; i++) {
      for (int j = 0; j < W; j++) {
        if (i == 0 || i == H - 1 || j == 0 || j == W - 1) {
          cout << "#";
        } else {
          cout << ".";
        }
      }
      cout << endl;
    }
    cout << endl;

  }

  return 0;

}
```
