#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, q;
  cin >> n >> q;

  deque <pair<string, int>> que;

  for (int i = 0; i < n; i++) {
    string name;
    int time;
    cin >> name >> time;
    que.push_back(make_pair(name, time));
  }

  int current = 0;

  while(!que.empty()) {
    pair<string, int> p = que.front();
    que.pop_front();
    if (p.second <= q) {
      cout << p.first << " " << p.second + current << endl;
    } else {
      que.push_back(make_pair(p.first, p.second - q));
    }
    current += min(q, p.second);
  }

  return 0;
}
