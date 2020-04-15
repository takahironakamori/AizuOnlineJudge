### ITP1_9_B

# シャッフル

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/9/ITP1_9_B)


## 発想

  substrを使って文字列を分けて、つなげると繰り返す。<br>


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  while (1) {

    string s;
    cin >> s;

    if (s == "-") {
      return 0;
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++) {
      int h;
      cin >> h;
      string s_ = s.substr(0, h);
      string b_ = s.substr(h, s.size() - h);
      s = b_ + s_;
    }

    cout << s << endl;

  }

  return 0;

}
```
