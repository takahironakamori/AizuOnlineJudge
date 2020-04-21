#include <bits/stdc++.h>
using namespace std;

int main() {

  int q;
  cin >> q;

  deque<int> A;
  for (int i = 0; i < q; i++) {
    int query, d, x;
    cin >> query;
    if (query == 0) {
      cin >> d >> x;
      if (d == 0) {
        A.push_front(x);
      } else {
        A.push_back(x);
      }
    } else if (query == 1) {
      cin >> d;
      cout << A[d] << endl;
    } else {
      cin >> d;
      if (d == 0) {
        A.pop_front();
      } else {
        A.pop_back();
      }
    }
  }

  return 0;

}
