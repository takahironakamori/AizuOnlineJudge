### ALDS1_1_C

# 素数

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/1/ALDS1_1_C)


## 発想

  素数判定を行う。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

bool is_prime(int N) {
  for (int i = 2; i * i <= N; i++) {
    if (N % i == 0) {
      return false;
    }
  }
  return N != 1;
}

int main() {

    int n;
    cin >> n;

    int answer = 0;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (is_prime(a)) {
            answer++;
        }
    }

    cout << answer << endl;

    return 0;

}
```
