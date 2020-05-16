### ITP2_3_B

# Min-Max Element

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/8/ITP2/3/ITP2_3_B)


## 発想

  問題文の通りに実装する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;


int main() {

  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int q;
  cin >> q;

  while(0 < q) {

    int com, b, e;
    cin >> com >> b >> e;

    long long ans = 1LL<<60;
    if (com == 1) {
      ans = 0 - ans;
    }

    for (int i = b; i < e; i++) {
      if (com == 0) {
        ans = min(ans, (long long) a[i]);
      } else {
        ans = max(ans, (long long) a[i]);
      }
    }

    cout << ans << endl;

    q--;

  }

  return 0;

}
```
