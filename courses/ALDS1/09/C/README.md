### ALDS1_9_C

# 優先順位キュー

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/9/ALDS1_9_C)


## 発想

  priority_queueを使う。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  priority_queue<int> que;

  while (1) {
    string command;
    cin >> command;
    if (command == "insert") {
      int x;
      cin >> x;
      que.push(x);
    } else if (command == "extract") {
      cout << que.top() << endl;
      que.pop();
    } else if (command == "end") {
      return 0;
    }
  }

  return 0;

}
```
