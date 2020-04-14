#include <bits/stdc++.h>
using namespace std;

int main() {
  int count = 1;
  while (1) {
    int i;
    cin >> i;
    if (i == 0){
      return 0;
    } else {
      cout << "Case " << count << ": " << i << endl;
      count++;
    }
  }

  return 0;

}
