### ITP1_8_B

# 数字の和

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/8/ITP1_8_B)


## 発想

  文字列を数値にして足し算する。<br>


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  while (1) {

    string s;
    cin >> s;

    if (s == "0") {
      return 0;
    }

    int answer = 0;

    for (int i = 0; i < s.size(); i++) {
      answer  += (s[i] - '0');
    }

    cout << answer << endl;

  }

  return 0;

}
```
