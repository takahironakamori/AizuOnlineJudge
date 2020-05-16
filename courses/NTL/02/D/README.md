### NTL_2_D

# Division of Big Integers

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/2/NTL_2_D)


## 発想

  C++だと、#include <boost/multiprecision/cpp_int.hpp>を使う。<br>
  Python3を使った方が楽<br>


## コード（C++）

```cpp
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using bint = boost::multiprecision::cpp_int;

int main() {

  bint A, B;
  cin >> A >> B;

  cout << A / B << endl;

  return 0;

}
```

## コード（Python3）
```python3
A, B = map(int, input().split())
C = abs(A)//abs(B)
print(-C if A^B < 0 else C)
```