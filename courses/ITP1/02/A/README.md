### ITP1_2_A

# 大小関係

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/2/ITP1_2_A)


## 発想

  大小関係を出力する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int a, b;
  cin >> a >> b;

  if (a == b) {
    cout << "a == b" << endl;
  } else if (a < b){
    cout << "a < b" << endl;
  } else {
    cout << "a > b" << endl;
  }

  return 0;

}
```
