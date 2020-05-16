### ITP2_3_C

# Count

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/8/ITP2/3/ITP2_3_C)


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

    int b, e, k;
    cin >> b >> e >> k;

    int ans = 0;

    for (int i = b; i < e; i++) {
      if (a[i] == k) {
        ans++;
      }
    }

    cout << ans << endl;

    q--;

  }

  return 0;

}
```
