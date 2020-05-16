### ITP2_3_D

# Lexicographical Comparison

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/8/ITP2/3/ITP2_3_D)


## 発想

  配列の0番目の要素から順番に比較する。
  
  配列の内容が同じ場合は、0を出力する。


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

  int m;
  cin >> m;

  vector<int> b(m);
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }

  int count = 0;

  while(1) {

    if (a.size() == count && b.size() == count) {
      cout << 0 << endl;
      return 0;
    }

    if (a.size() == count) {
      cout << 1 << endl;
      return 0;
    }

    if (b.size() == count) {
      cout << 0 << endl;
      return 0;
    }

    if (a[count] == b[count]) {
      count++;
    } else {
      if (a[count] < b[count]) {
        cout << 1 << endl;
      } else {
        cout << 0 << endl;
      }
      return 0;
    }

  }

}
```
