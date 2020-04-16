### ITP1_3_D

# 約数の数

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/3/ITP1_3_D)


## 発想

  a以上、b以下の数値でcで割り切れる数を数える。<br>
  

## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int a, b, c;
  cin >> a >> b >> c;

  int answer = 0;

  for (int i = a; i <= b; i++) {
    if (c % i == 0) {
      answer++;
    }
  }

  cout << answer << endl;

  return 0;

}
```
