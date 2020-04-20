#include <bits/stdc++.h>
using namespace std;

// mod の処理を忘れさせてくれるライブラリ
// https://github.com/atcoder-live/library/blob/master/mint.cpp
const int mod = 1000000007;
struct mint {
  long long x;
  mint(long long x = 0):x((x % mod + mod) % mod) {}
  mint operator-() const {return mint(-x);}
  mint& operator+=(const mint a) {
    if ((x += a.x) >= mod) x -= mod;
    return *this;
  }
  mint& operator-=(const mint a) {
    if ((x += mod - a.x) >= mod) x -= mod;
    return *this;
  }
  mint& operator*=(const mint a) {
    (x *= a.x) %= mod;
    return *this;
  }
  mint operator+(const mint a) const {
    mint res(*this);
    return res+=a;
  }
  mint operator-(const mint a) const {
    mint res(*this);
    return res-=a;
  }
  mint operator*(const mint a) const {
    mint res(*this);
    return res*=a;
  }
  mint pow(long long t) const {
    if (!t) return 1;
    mint a = pow(t>>1);
    a *= a;
    if (t&1) a *= *this;
    return a;
  }
  mint inv() const {
    return pow(mod-2);
  }
  mint& operator/=(const mint a) {
    return (*this) *= a.inv();
  }
  mint operator/(const mint a) const {
    mint res(*this);
    return res /= a;
  }
};

// 繰り返し自乗法で m の n 乗を計算する
mint f (int m, int n) {
  mint result = 1;
  if (0 < n) {
    result = f(m, n / 2);
    if (n % 2 == 0) {
      result *= result;
    } else {
      result *= result;
      result *= m;
    }
  }
  return result;
}

int main() {

  long long m, n;
  cin >> m >> n;

  mint answer = f(m, n);

  cout << answer.x << endl;

  return 0;

}
