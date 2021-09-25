#include <iostream>

using namespace std;

typedef long long   ll;
typedef long double ld;

#define rep(i, n)      for (int i = 0; i < (int)(n); ++i)
#define rep3(i, m, n)  for (int i = (m); i < (int)(n); ++i)
#define rrep(i, n)     for (int i = (int)(n)-1; i >= 0; --i)
#define rrep3(i, m, n) for (int i = (int)(n)-1; i >= (m); --i)

#define endl '\n'
#define INF  0x7f7f7f7f7f7f7f7f
#define INFi 0x7f7f7f7f


ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

ll solve(ll X) {
  // TODO: edit here
  if (400 <= X && X <= 599 ) return 8;
  if (600 <= X && X <= 799 ) return 7;
  if (800 <= X && X <= 999 ) return 6;
  if (1000 <= X && X <= 1199 ) return 5;
  if (1200 <= X && X <= 1399 ) return 4;
  if (1400 <= X && X <= 1599 ) return 3;
  if (1600 <= X && X <= 1799 ) return 2;
  if (1800 <= X && X <= 1999 ) return 1;
  return 0;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll X;
  cin >> X;

  auto ans = solve(X);
  cout << ans << endl;

  return 0;
}
