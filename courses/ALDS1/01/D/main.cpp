#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    long long mn = 10000000000;
    long long mx = 0 - 10000000000;
    long long r;

    for (int i = 0; i < n; i++) {
        cin >> r;
        mx = max(mx, r - mn);
        mn = min(mn, r);
    }

    cout << mx << endl;

    return 0;

}
