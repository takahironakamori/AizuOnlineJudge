#include <bits/stdc++.h>
using namespace std;

int main() {

  int q;
  cin >> q;

  while (0 < q) {

    string X, Y;
    cin >> X >> Y;

    int x = X.size();
    int y = Y.size();

    // X_0 ... X_i と Y_0 ... Y_j に対するLCSの長さ
    vector<vector<int>> dp(x+1, vector<int>(y+1));

    int answer = 0;

    for (int i = 0; i < x; i++) {
      for (int j = 0; j < y; j++) {
        if (X[i] == Y[j]) {
          // 同じ文字列の場合は、
          // X_0 ... X_i と Y_0 ... Y_j に対するLCSに1加える
          dp[i+1][j+1] = dp[i][j] + 1;
        } else {
          // 違う場合は、
          // X_0 ... X_i と Y_0 ... Y_j+1 に対するLCSと
          // X_0 ... X_i+1 と Y_0 ... Y_j に対するLCSで
          // 大きい方
          dp[i+1][j+1] = max(dp[i][j+1], dp[i+1][j]);
        }
        answer = max(answer, dp[i+1][j+1]);
      }
    }

    cout << answer << endl;

    q--;
  }

  return 0;

}
