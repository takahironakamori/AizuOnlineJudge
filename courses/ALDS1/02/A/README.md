### ALDS1_2_A

# バブルソート

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/2/ALDS1_2_A)


## 発想

  擬似コードに基づいてバブルソートを実装する。<br>


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> A, int N) {
    bool flg = true;
    int count = 0;
    while (flg) {
        flg = false;
        for (int i = N - 1; 1 <= i; i--) {
            if (A[i] < A[i-1]) {
                swap(A[i], A[i-1]);
                flg = true;
                count++;
            }
        }
    }
    for (int i = 0; i < N; i++) {
        cout << A[i];
        if (i != N-1) {
            cout << " ";
        }
    }
    cout << endl;
    cout << count << endl;
}

int main() {

    int n;
    cin >> n;

    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    bubbleSort(A, n);

    return 0;

}
```
