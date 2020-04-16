#include <bits/stdc++.h>
using namespace std;

int main() {

  int W, H, x, y, r;
  cin >> W >> H >> x >> y >> r;

  if (x + r <= W && y + r <= H && 0 <= x - r && 0 <= y - r) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;

}
