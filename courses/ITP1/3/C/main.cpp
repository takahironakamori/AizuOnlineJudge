#include <bits/stdc++.h>
using namespace std;

int main() {

  while (1) {
    int x, y;
    cin >> x >> y;
    if (x == 0 && y == 0){
      return 0;
    } else {
      cout << min(x,y) << " " << max(x,y) << endl;
    }
  }

  return 0;

}
