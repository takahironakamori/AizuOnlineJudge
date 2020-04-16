### ITP1_5_D

# 構造化プログラミング

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/5/ITP1_5_D)


## 発想

  1 から n までのうち、3 の倍数か3が含まれている数字を出力する。<br>


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    if (i % 3 == 0) {
      cout << " " <<  i;
    } else {
      string s = to_string(i);
      for (int j = 0; j < s.size(); j++){
        if (s[j] == '3') {
          cout << " " << i;
          break;
        }
      }
    }
  }
  cout << endl;

  return 0;

}
```
