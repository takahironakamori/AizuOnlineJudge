### ITP1_3_B

# テストケースの出力

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/3/ITP1_3_B)


## 発想

  回数を数える変数を用意して、iを出力する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
  int count = 1;
  while (1) {
    int i;
    cin >> i;
    if (i == 0){
      return 0;
    } else {
      cout << "Case " << count << ": " << i << endl;
      count++;
    }
  }

  return 0;

}
```
