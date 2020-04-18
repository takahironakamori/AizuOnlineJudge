### ALDS1_4_A

# 線形探索

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_A)


## 発想

  2重ループで確認する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, q;

  cin >> n;
  vector<int> S(n);
  for (int i = 0; i < n; i++) {
    cin >> S[i];
  }

  cin >> q;
  vector<int> T(q);
  for (int i = 0; i < q; i++) {
    cin >> T[i];
  }

  int answer = 0;

  for (int i = 0; i < q; i++) {
    for (int j = 0; j < n; j++) {
      if (T[i] == S[j]) {
        answer++;
        break;
      }
    }
  }

  cout << answer << endl;

  return 0;

}
```
