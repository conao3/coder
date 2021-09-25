#include <iostream>

using namespace std;

typedef long long   ll;
typedef long double ld;

#define rep(i, n)      for (ll i = 0; i < (ll)(n); ++i)
#define rep3(i, m, n)  for (ll i = (m); i < (ll)(n); ++i)
#define rrep(i, n)     for (ll i = (ll)(n)-1; i >= 0; --i)
#define rrep3(i, m, n) for (ll i = (ll)(n)-1; i >= (m); --i)

#define endl '\n'
#define INF  0x7f7f7f7f7f7f7f7f
#define INFi 0x7f7f7f7f


ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

ll solve(ll X, ll K, ll D) {
  rep(i, K)
    if (abs(X-D) < abs(X+D) || X > X+D) X-=D;
    else X+=D;
  return abs(X);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll X, K, D;
  cin >> X >> K >> D;

  auto ans = solve(X, K, D);
  cout << ans << endl;

  return 0;
}
