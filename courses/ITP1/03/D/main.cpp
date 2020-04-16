#include <bits/stdc++.h>
using namespace std;

int main() {

  int a, b, c;
  cin >> a >> b >> c;

  int answer = 0;

  for (int i = a; i <= b; i++) {
    if (c % i == 0) {
      answer++;
    }
  }

  cout << answer << endl;

  return 0;

}
