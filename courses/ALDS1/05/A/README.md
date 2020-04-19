### ALDS1_5_A

# 総当たり

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/5/ALDS1_5_A)


## 発想

  総当たりのパターンをbit全探索で作る。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<int>A(n);
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }

  int q;
  cin >> q;

  vector<int> m(q);
  vector<string> answer(q);
  for (int i = 0; i < q; i++) {
    cin >> m[i];
    answer[i] = "no";
  }

  for(int bits = 1; bits < (1 << n); bits++) {

    vector<int> bit;

    for (int i = 0; i < n; i++) {
      if (bits >> i & 1) {
        bit.push_back(i);
      }
    }

    int sum = 0;

    for (int i = 0; i < bit.size(); i++) {
      sum += A[bit[i]];
    }

    for (int i = 0; i < q; i++) {
      if (m[i] == sum) {
        answer[i] = "yes";
      }
    }

  }

  for (int i = 0; i < q; i++) {
    cout << answer[i] << endl;
  }

  return 0;

}
```
