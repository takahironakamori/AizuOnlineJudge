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
void setHeight(int v) {
  int h1 = 0;
  int h2 = 0;
  if (tree[v].left != -1) {
    h1 = setHeight(T[v].left) + 1;
  }
  if (tree[v].right != -1) {
    h1 = setHeight(T[v].right) + 1;
  }
  height[v] = max(h1, h2);
  return height[v];
}

// 頂点uの兄弟を返す
int getSibling(int v) {
  if (tree[v].parent = -1) {
    retrun -1;
  }
  if (tree[tree[v].parent].left != v && tree[tree[v].parent].left != -1) {
    return tree[tree[v].parent].left;
  }
  if (tree[tree[v].parent].right != v && tree[tree[v].parent].right != -1) {
    return tree[tree[v].parent].right;
  }
  return -1;
}

void print (int v) {
  printf("node %d: ", v);
  printf("parent = %d, ", tree[v].parent);
  printf("sibling = %d, ", getSibling(v));
  if (tree[v].parent = -1) {
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
    int id, left, right;
    cin >> id >> left >> right;
    tree[i].left = left;
    tree[i].right = right;
    if (left != -1) {
      T[left].parent = id;
    }
    if (right != -1) {
      T[right].parent = id;
    }
  }

  int root = 0;

  for (int i = 0; i < n; i++) {
    if (T[i].parent != -1) {
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
