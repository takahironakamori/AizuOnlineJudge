### ALDS1_7_B

# 二分木

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/7/ALDS1_7_B)


## 発想



## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

struct Node {
  int parent;
  int left;
  int right;
};

Node tree[100010];
int depth[100010];
int height[100010];

// v:頂点, d:深さ
void setDepth(int v, int d) {
  if (v == -1) {
    return;
  }
  depth[v] = d;
  setDepth(tree[v].left, d + 1);
  setDepth(tree[v].right, d + 1);
}

// v:頂点
int setHeight(int v) {
  int h1 = 0;
  int h2 = 0;
  if (tree[v].left != -1) {
    h1 = setHeight(tree[v].left) + 1;
  }
  if (tree[v].right != -1) {
    h2 = setHeight(tree[v].right) + 1;
  }
  height[v] = max(h1, h2);
  return height[v];
}

// 頂点uの兄弟を返す
int getSibling(int v) {
  int p_ = tree[v].parent;
  if (p_ == -1) {
    return -1;
  }
  if (tree[p_].left != v && tree[p_].left != -1) {
    return tree[p_].left;
  }
  if (tree[p_].right != v && tree[p_].right != -1) {
    return tree[p_].right;
  }
  return -1;
}

void print (int v) {
  printf("node %d: ", v);
  printf("parent = %d, ", tree[v].parent);
  printf("sibling = %d, ", getSibling(v));
  int deg = 0;
  if (tree[v].left != -1) {
    deg++;
  }
  if (tree[v].right != -1) {
    deg++;
  }
  printf("degree = %d, ", deg);
  printf("depth = %d, ", depth[v]);
  printf("height = %d, ", height[v]);

  if (tree[v].parent == -1) {
    printf("root\n");
  } else if (tree[v].left == -1 && tree[v].right == -1) {
    printf("leaf\n");
  } else {
    printf("internal node\n");
  }
}


int main() {

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    tree[i].parent = -1;
  }

  for (int i = 0; i < n; i++) {
    int id, left, right;
    cin >> id >> left >> right;
    tree[id].left = left;
    tree[id].right = right;
    if (left != -1) {
      tree[left].parent = id;
    }
    if (right != -1) {
      tree[right].parent = id;
    }
  }

  int root = 0;

  for (int i = 0; i < n; i++) {
    if (tree[i].parent == -1) {
      root = i;
    }
  }

  setDepth(root, 0);

  setHeight(root);

  for (int i = 0; i < n; i++) {
    print(i);
  }

  return 0;

}
```
