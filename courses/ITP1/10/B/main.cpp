#include <bits/stdc++.h>
using namespace std;

int main() {

  double a, b, c;
  cin >> a >> b >> c;

  double area = a * b * sin(c * M_PI/180) / 2;
  double l = sqrt(a * a + b * b - 2 * a * b * cos(c * M_PI / 180)) + a + b;
  double h = b * sin(c * M_PI / 180);

  printf("%.8f", area);
  printf("\n");

  printf("%.8f", l);
  printf("\n");

  printf("%.8f", h);
  printf("\n");

  return 0;

}
