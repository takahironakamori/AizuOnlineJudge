### ITP1_5_C

# チェスボードの描画

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/5/ITP1_5_C)


## 発想

  二重ループの回数の偶奇で出力するものを決める。


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
        if (i % 2 == 0) {
          if (j % 2 == 0) {
            cout << "#";
          } else {
            cout << ".";
          }
        } else {
          if (j % 2 == 0) {
            cout << ".";
          } else {
            cout << "#";
          }
        }
      }
      cout << endl;
    }
    cout << endl;

  }

  return 0;

}
```
