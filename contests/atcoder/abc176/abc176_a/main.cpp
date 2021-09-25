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

ll solve(ll N, ll X, ll T) {
  ll res;
  res = (N/X)*T;
  if (N % X)
    res += T;

  return (res);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll N, X, T;
  cin >> N >> X >> T;

  auto ans = solve(N, X, T);
  cout << ans << endl;

  return 0;
}
