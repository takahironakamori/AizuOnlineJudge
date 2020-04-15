#include <bits/stdc++.h>
using namespace std;

int main() {

  double x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;

  double dx = abs(x1 - x2);
  double dy = abs(y1 - y2);

  double ans = dx * dx + dy * dy;
  ans = sqrt(ans);

  printf("%.8f", ans);
  printf("\n");

  return 0;

}
