### ALDS1_3_C

# 双方向連結リスト

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/3/ALDS1_3_C)


## 発想

  dequeを使った管理。<br>
  delete x の場合は、queを最初から順番に確認して、見つかったら1度だけ削除する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  deque <int> que;
  string command;
  int x;

  for (int i = 0; i < n; i++) {  
    cin >> command;
    if (command == "deleteFirst") {
      que.pop_front();
    } else if (command == "deleteLast") {
      que.pop_back();
    } else if (command == "insert") {
      cin >> x;
      que.push_front(x);
    } else {
      cin >> x;
      for (auto it = que.begin(); it != que.end();) {
        // 条件一致した要素を削除する
        if (*it == x) {
          // 削除された要素の次を指すイテレータが返される。
          que.erase(it);
          break;
        }
        // 要素削除をしない場合に、イテレータを進める
        else {
          ++it;
        }
      }
    }
  }

  while (!que.empty()) {
    cout << que.front();
    que.pop_front();
    if (!que.empty()) {
      cout << " ";
    }
  }

  cout << endl;

  return 0;
}
```
