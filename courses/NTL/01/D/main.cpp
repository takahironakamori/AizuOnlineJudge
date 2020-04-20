#include <bits/stdc++.h>
using namespace std;

int eulerPhi (int n) {
  if (n == 0) {
    return 0;
  }
  int result = n;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      result -= result / i;
      while (n % i == 0) {
        n /= i;
      }
    }
  }
  if (n > 1) {
    result -= result / n;
  }
  return result;
}

int main() {

  long long n;
  cin >> n;

  cout << eulerPhi(n) << endl;

  return 0;

}
