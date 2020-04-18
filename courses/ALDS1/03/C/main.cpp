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
