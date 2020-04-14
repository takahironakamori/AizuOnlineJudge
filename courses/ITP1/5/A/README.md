### ITP1_5_A

# 長方形の描画

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/5/ITP1_5_A)


## 発想

  二重ループで#を出力する。


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
        cout << "#";
      }
      cout << endl;
    }
    cout << endl;

  }

  return 0;

}
```
