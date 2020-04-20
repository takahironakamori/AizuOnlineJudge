#include <bits/stdc++.h>
using namespace std;

long long expantedEuclid(long long a, long long b, long long &x, long long &y) {
  long long d;
	if (b == 0) {
		d = a;
		x = 1;
    y = 0;
	}
	else {
		d = expantedEuclid(b, a%b, y, x);
		y -= a / b * x;
	}
	return d;
}

int main() {

  long long a, b, x, y;
  cin >> a >> b;

  expantedEuclid(a, b, x, y);

  cout << x << " " << y << endl;

  return 0;

}
