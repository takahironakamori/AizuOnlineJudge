### NTL_1_A

# 素因数分解

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_A)


## 発想

  素因数分解し、内容を出力する。<br>


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

map<long, long> prime_factor(long N) {
  map<long, long> res;
  for (long i = 2; i * i <= N; i++) {
    while (N % i == 0) {
      res[i]++;
      N /= i;
    }
  }
  if (N != 1) {
    res[N] = 1;
  }
  return res;
}

int main() {

  long n;
  cin >> n;

  map<long, long> m = prime_factor(n);

  cout << n << ":";

  for (auto item:m) {
    for (int i = 0; i < item.second; i++) {
      cout << " " << item.first;
    }
  }

  cout << endl;

  return 0;

}
```
