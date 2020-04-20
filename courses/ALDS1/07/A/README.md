### ALDS1_7_A

# 根付き木

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/7/ALDS1_7_A)


## 発想

  dfsで辿っていく。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

vector<int> tree[100010];
int id[100010];
int parent[100010];
int depth[100010];
int used[100010];

// v:見ている頂点, d:深さ
void dfs (int v, int d) {
  depth[v] = d;
  for (int i = 0; i < (int) tree[v].size(); i++) {
    dfs (tree[v][i], d + 1);
    parent[tree[v][i]] = v;
  }
}

int main() {

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    parent[i] = -1;
    int id, k;
    cin >> id >> k;
    tree[id].resize(k);
    for (int j = 0; j < k; j++) {
      cin >> tree[id][j];
      used[tree[id][j]] = 1;
    }
  }

  for (int i = 0; i < n; i++) {
    if (used[i] != 1) {
      dfs(i, 0);
    }
  }

  for (int i = 0; i < n; i++) {
    cout << "node " << i << ": parent = " << parent[i] << ", depth = " << depth[i];
    if (parent[i] < 0) {
      cout << ", root, [";
    } else if (!tree[i].size()) {
      cout << ", leaf, [";
    } else {
      cout << ", internal node, [";
    }
    for (int j = 0; j < (int) tree[i].size(); j++) {
      cout << tree[i][j];
      if (j != (int) tree[i].size() - 1) {
        cout << ", ";
      }
    }
    cout << "]" << endl;
  }

  return 0;

}
```
