### ITP2_1_C

# List

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/8/ITP2/1/ITP2_1_C)


## 発想

  Listを操作する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int q;
  cin >> q;

  list<int> L;
  auto it = L.end();

  auto insert = [&](int x) {
    L.insert(it, x);
    it--;
  };

  auto move = [&](int d) {
    while (0 < d) {
      d--;
      it++;
    }
    while (d < 0) {
      d++;
      it--;
    }
  };

  auto erase = [&]() {
    auto tmp = it++;
    L.erase(tmp);
  };

  for (int i = 0; i < q; i++) {
    int query, x;
    cin >> query;
    if (query == 0) {
      cin >> x;
      insert(x);
    } else if (query == 1) {
      cin >> x;
      move(x);
    } else {
      erase();
    }
  }

  for (auto item:L) {
    cout << item << endl;
  }

  return 0;

}
```
