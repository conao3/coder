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

ll solve(ll R, ll C, int K, const vector<ll> & r, const vector<ll> & c, const vector<ll> & v) {
  // TODO: edit here
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int R, C;
  int K;
  cin >> R >> C >> K;
  vector<ll> r(K), c(K), v(K);
  rep (i, K) {
    cin >> r[i] >> c[i] >> v[i];
  }

  auto ans = solve(R, C, K, r, c, v);
  cout << ans << endl;

  return 0;
}
