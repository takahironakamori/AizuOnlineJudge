#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, q;

  cin >> n;
  vector<int> S(n);
  for (int i = 0; i < n; i++) {
    cin >> S[i];
  }

  cin >> q;
  vector<int> T(q);
  for (int i = 0; i < q; i++) {
    cin >> T[i];
  }

  int answer = 0;

  for (int i = 0; i < q; i++) {
    auto l_position = lower_bound(S.begin(), S.end(), T[i]);
    if (T[i] == *l_position) {
      answer++;
    }
  }

  cout << answer << endl;

  return 0;

}
