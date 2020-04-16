#include <bits/stdc++.h>
using namespace std;

vector<string> bubbleSort(vector<string> A, int N) {
    bool flg = true;
    while (flg) {
        flg = false;
        for (int i = N - 1; 1 <= i; i--) {
            int a1 = (int) A[i][1];
            int a2 = (int) A[i-1][1];
            if (a1 < a2) {
                swap(A[i], A[i-1]);
                flg = true;
            }
        }
    }
    return A;
}

vector<string> selectionSort(vector<string> A, int N) {
    for (int i = 0; i < N; i++) {
        int minj = i;
        for (int j = i; j < N; j++) {
            int a1 = (int) A[j][1];
            int a2 = (int) A[minj][1];
            if (a1 < a2) {
                minj = j;
            }
        }
        if(i != minj){
            swap(A[i], A[minj]);
        }
    }
    return A;
}

int main() {

    int n;
    cin >> n;

    vector<string> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    vector<string> a1 = bubbleSort(A, n);

    for (int i = 0; i < n; i++) {
        cout << a1[i];
        if (i != n - 1) {
            cout << " ";
        }
    }
    cout << endl;
    cout << "Stable" << endl;

    vector<string> a2 = selectionSort(A, n);

    bool flg = true;

    for (int i = 0; i < n; i++) {
        if (a1[i] != a2[i]) {
            flg = false;
        }
        cout << a2[i];
        if (i != n - 1) {
            cout << " ";
        }
    }
    cout << endl;

    if (flg) {
        cout << "Stable" << endl;
    } else {
        cout << "Not stable" << endl;
    }

    return 0;

}
