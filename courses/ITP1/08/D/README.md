### ITP1_8_D

# リング

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/8/ITP1_8_D)


## 発想

  s二つ分の中から、qを作り出すことができれば、Yesとなる。<br>
  作り出すか否かはfindで判定する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  string s_;
  string q;
  cin >> s_ >> q;

  string s = s_ + s_;

  if (s.find(q) == -1) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }

  return 0;

}
```
