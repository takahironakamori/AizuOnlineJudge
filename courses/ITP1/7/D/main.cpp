#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, m, l;
  cin >> n >> m >> l;

  vector<vector<int>> A(n, vector<int>(m));
  vector<vector<int>> B(m, vector<int>(l));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> A[i][j];
    }
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < l; j++) {
      cin >> B[i][j];
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < l; j++) {
      long long c = 0;
      for (int k = 0; k < m; k++) {
        c +=(long long) A[i][k] * B[k][j];
      }
      cout << c;
      if (j != l - 1) {
        cout << " ";
      }
    }
    cout << endl;
  }

  return 0;

}
