### NTL_1_C

# 最小公倍数

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_C)


## 発想

  最小公倍数を求める。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}

long long lcm(long long a, long long b) {
  return a / gcd(a, b) * b;
}

int main() {

  long long n;
  cin >> n;

  vector<long long> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  long long answer = a[0];

  for (int i = 1; i < n; i++) {
    answer = lcm(answer, a[i]);
  }

  cout << answer << endl;

  return 0;

}
```
