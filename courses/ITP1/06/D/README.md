### ITP1_6_D

# ベクトルと行列の積

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/6/ITP1_6_D)


## 発想

  A,bの各ベクトルを配列で持つ。<br>


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, m;
  cin >> n >> m;

  vector<vector<int>> A(n,vector<int>(m));
  vector<int> B(m);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> A[i][j];
    }
  }

  for (int i = 0; i < m; i++) {
    cin >> B[i];
  }

  for (int i = 0; i < n; i++) {
    int result = 0;
    for (int j = 0; j < m; j++) {
      result += A[i][j] * B[j];
    }
    cout << result << endl;
  }

  return 0;

}
```
