### ITP2_3_A

# Min-Max

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/8/ITP2/3/ITP2_3_A)


## 発想

  配列に入れ、並び替えを行い、0番目と2番目の要素を出力する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  vector<int> v(3);
  cin >> v[0] >> v[1] >> v[2];

  sort(v.begin(), v.end());

  cout << v[0] << " " << v[2] << endl;

  return 0;

}
```
