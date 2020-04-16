### ALDS1_1_A

# 挿入ソート

  [問題はこちら](https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/1/ALDS1_1_A)


## 発想

  擬似コードに基づいて挿入ソートを実装する。<br>


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> A, int N) {
    for (int i = 0; i < N; i++) {
        int v = A[i];
        int j = i - 1;
        while (0 <= j && v < A[j]) {
            A[j + 1] = A[j];
            j--;
            A[j + 1] = v;
        }
        for (int j = 0; j < N; j++) {
            cout << A[j];
            if (j != N - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {

    int n;
    cin >> n;

    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    insertionSort(A, n);

    return 0;

}
```
