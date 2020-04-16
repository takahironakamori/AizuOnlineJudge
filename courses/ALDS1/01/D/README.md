### ALDS1_1_D

# 最大の利益

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/1/ALDS1_1_D)


## 発想

  R<sub>t</sub>からtまででのRの最小値の差の最大値を求める。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    long long mn = 10000000000;
    long long mx = 0 - 10000000000;
    long long r;

    for (int i = 0; i < n; i++) {
        cin >> r;
        mx = max(mx, r - mn);
        mn = min(mn, r);
    }

    cout << mx << endl;

    return 0;

}
```
