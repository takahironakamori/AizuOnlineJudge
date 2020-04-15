### ITP1_6_A

# 数列の反転

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/6/ITP1_6_A)


## 発想

  配列で受け取り、反対から出力する。<br>
  最後の要素を出力するときは空白を出力しない。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = n - 1; 0 <= i; i--) {
    cout << a[i];
    if (i != 0) {
      cout << " ";
    }
  }
  cout << endl;

  return 0;

}
```
