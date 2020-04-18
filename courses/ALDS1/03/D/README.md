### ALDS1_3_D

# Areas on the Cross-Section Diagram

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/3/ALDS1_3_D)


## 発想

  入力された文字を順番に調べる。<br>
  ・\ならば、その位置（先頭から何文字目か）を表す整数をdeque S1　に積む。<br>
  ・/ならば、deque S1 の最後の \ の位置を取り出し、現在の位置との距離を総面積に加える。<br>
  ・_ならば、\と/の距離を1つ増やすだけなので、結果的になにもしなくていい。
  水たまりは deque S2 で管理する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  string s;
  cin >> s;

  vector<int> answer;

  deque<int> S1;
  deque<pair<int, int>> S2;
  int sum = 0;

  for (int i = 0; i < s.size(); i++) {  
    if (s[i] == '\\') {
      S1.push_back(i);
    } else if (s[i] == '/' && 0 < S1.size()) {
      int j = S1.back();
      S1.pop_back();
      sum += i - j;
      int a = i - j;
      while (0 < S2.size() && j < S2.back().first) {
        a += S2.back().second;
        S2.pop_back();
      }
      S2.push_back(make_pair(j, a));
    }
  }

  while (0 < S2.size()) {
    answer.push_back(S2.back().second);
    S2.pop_back();
  }

  reverse(answer.begin(), answer.end());

  cout << sum << endl;
  cout << answer.size();

  for (int i = 0; i < answer.size(); i++) {
    cout << " ";
    cout << answer[i];
  }
  cout << endl;

  return 0;
}
```
