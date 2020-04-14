### ITP1_2_C

# 3つの数の整列

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/1/ITP1_1_C)


## 発想

  並び替えて小さい順に出力する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  vector<int> a(3);
  cin >> a[0] >> a[1] >> a[2];

  sort(a.begin(), a.end());

  cout << a[0] << " " << a[1] << " " << a[2] << endl;

  return 0;

}
```
