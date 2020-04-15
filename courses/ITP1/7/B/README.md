### ITP1_7_B

# 組み合わせの数

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/7/ITP1_7_B)


## 発想

  3重ループでxになるパターンを数える。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  while(1) {

    int n, x;
    cin >> n >> x;

    if (n == 0 && x == 0) {
      return 0;
    }

    int answer = 0;

    for (int i = 1; i <= n; i++) {
      for (int j = i + 1; j <= n; j++) {
        for (int k = j + 1; k <= n; k++) {
          if (i + j + k == x) {
            answer++;
          }
        }
      }
    }

    cout << answer << endl;

  }

  return 0;

}
```
