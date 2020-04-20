### NTL_1_E

# 拡張ユークリッドの互除法

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_E)


## 発想

  与えられた２つの整数 a、b について ax + by = gcd(a,b) の整数解 (x,y) を求める。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

long long expantedEuclid(long long a, long long b, long long &x, long long &y) {
  long long d;
	if (b == 0) {
		d = a;
		x = 1;
    y = 0;
	}
	else {
		d = expantedEuclid(b, a%b, y, x);
		y -= a / b * x;
	}
	return d;
}

int main() {

  long long a, b, x, y;
  cin >> a >> b;

  expantedEuclid(a, b, x, y);

  cout << x << " " << y << endl;

  return 0;

}
```
