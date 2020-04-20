### NTL_2_F

# Multiplication of Big Integers II

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/2/NTL_2_F)


## 発想

  C++の#include <boost/multiprecision/cpp_int.hpp>でも間に合わない。<br>
  Python3を使う。<br>


## コード（Python3）
```python3
a, b = map(int, input().split())
print(a * b)
```
