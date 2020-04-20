### ALDS1_7_D

# Reconstruction of a Tree

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/7/ALDS1_7_D)


## 発想



## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int n, position;
vector<int> pre;
vector<int> in;
vector<int> post;

void rec (int l, int r) {
  if (r <= l) {
    return;
  }
  int root = pre[position++];
  int m = distance(in.begin(), find(in.begin(), in.end(), root));
  rec(l, m);
  rec(m + 1, r);
  post.push_back(root);
}

void f () {
  position = 0;
  rec(0, pre.size());
  for (int i = 0; i < n; i++) {
    cout << post[i];
    if (i != n - 1) {
      cout << " ";
    }
  }
  cout << endl;
}

int main() {

  cin >> n;

  for (int i = 0; i < n; i++) {
    int k;
    cin >> k;
    pre.push_back(k);
  }

  for (int i = 0; i < n; i++) {
    int k;
    cin >> k;
    in.push_back(k);
  }

  f();

  return 0;

}
```
