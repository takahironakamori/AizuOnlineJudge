#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, q;
  cin >> n >> q;

  vector<vector<int>> A(n);

  for (int i = 0; i < q; i++) {
    int query, x, t;
    cin >> query >> t;
    if (query == 0) {
      cin >> x;
      A[t].push_back(x);
    } else if (query == 1) {
      for (int j = 0; j < A[t].size(); j++) {
        cout << A[t][j];
        if (j != A[t].size() - 1) {
          cout << " ";
        }
      }
      cout << endl;
    } else {
      A[t].clear();
    }
  }

  return 0;

}
