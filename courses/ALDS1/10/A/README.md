### ALDS1_10_A

# フィボナッチ数列

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/10/ALDS1_10_A)


## 発想

  DP。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<int> dp(n+1);

  dp[0] = 1;
  dp[1] = 1;

  for (int i = 2; i <= n; i++) {
    dp[i] = dp[i - 2] + dp[i - 1];
  }

  cout << dp[n] << endl;

  return 0;

}
```
