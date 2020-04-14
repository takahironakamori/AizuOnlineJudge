#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  long long mx = 0 - 1LL<<60;
  long long mn = 1LL<<60;
  long long sum = 0;

  for (int i = 0; i < n; i++) {
    long long a;
    cin >> a;
    mn = min(mn, a);
    mx = max(mx, a);
    sum += a;
  }

  cout << mn << " " << mx << " " << sum << endl;

  return 0;

}
