#include <bits/stdc++.h>
using namespace std;

long long n, k;
vector<long long> w;

int f(long long p) {
  // 荷物の数
  int count = 0;
  for (int j = 0; j < k; j++) {
    long long sum = 0;
    while (sum + w[count] <= p) {
      sum += w[count];
      count++;
      // 全部詰めたらnを返す
      if (count == n) {
        return n;
      }
    }
  }
  // 詰めた個数を返す
  return count;
}

int main() {

  cin >> n >> k;

  w.resize(n);
  for (int i = 0; i < n; i++) {
    cin >> w[i];
  }

  // Pを二分探索で決める
  long long left = 0;
  long long right = 100000 * 10000;
  long long mid = 0;

  while (1 < right - left) {
    mid = (left + right) / 2;
    // midをpとすると、何個荷物が詰めるか
    int v = f(mid);
    if (n <= v) {
      // 詰めた個数がn以上の場合は、midを上限にする
      right = mid;
    } else {
      // 詰めた個数がn未満の場合は、midを下限にする
      left = mid;
    }
  }

  cout << right << endl;

  return 0;

}
