### ITP1_9_C

# カードゲーム

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/9/ITP1_9_C)


## 発想

  文字列を比較する。<br>


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  int taro = 0;
  int hanako = 0;

  for (int i = 0; i < n; i++) {
    string s1, s2;
    cin >> s1 >> s2;
    if (s1 == s2) {
      taro++;
      hanako++;
    } else if (s1 < s2) {
      hanako += 3;
    } else {
      taro += 3;
    }
  }

  cout << taro << " " << hanako << endl;

  return 0;

}
```
