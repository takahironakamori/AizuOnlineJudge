#include <bits/stdc++.h>
using namespace std;


int main() {

  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int m;
  cin >> m;

  vector<int> b(m);
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }

  int count = 0;

  while(1) {

    if (a.size() == count && b.size() == count) {
      cout << 0 << endl;
      return 0;
    }

    if (a.size() == count) {
      cout << 1 << endl;
      return 0;
    }

    if (b.size() == count) {
      cout << 0 << endl;
      return 0;
    }

    if (a[count] == b[count]) {
      count++;
    } else {
      if (a[count] < b[count]) {
        cout << 1 << endl;
      } else {
        cout << 0 << endl;
      }
      return 0;
    }

  }

}
