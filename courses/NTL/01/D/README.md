### NTL_1_D

# オイラーのφ関数

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_D)


## 発想

  1 から n までの自然数のうち n と互いに素なものの個数を求める。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int eulerPhi (int n) {
  if (n == 0) {
    return 0;
  }
  int result = n;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      result -= result / i;
      while (n % i == 0) {
        n /= i;
      }
    }
  }
  if (n > 1) {
    result -= result / n;
  }
  return result;
}

int main() {

  long long n;
  cin >> n;

  cout << eulerPhi(n) << endl;

  return 0;

}
```
