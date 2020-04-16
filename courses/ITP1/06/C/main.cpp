#include <bits/stdc++.h>
using namespace std;

int room[4][3][10];

int main() {

  int n;
  cin >> n;

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 10; k++) {
        room[i][j][k] = 0;
      }
    }
  }


  for (int i = 0; i < n; i++) {
    int b, f, r, v;
    cin >> b >> f >> r >> v;
    --b;
    --f;
    --r;
    room[b][f][r] += v;
  }

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 10; k++) {
        cout << " " << room[i][j][k];
      }
      cout << endl;
    }
    if (i != 3) {
      cout << "####################" << endl;
    }
  }

  return 0;

}
