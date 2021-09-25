#include <iostream>

using namespace std;

typedef long long    ll;
typedef long double  ld;

#define rep(i, n)      for (int i = 0; i < (int)(n); ++i)
#define rep3(i, m, n)  for (int i = (m); i < (int)(n); ++i)
#define rrep(i, n)     for (int i = (int)(n)-1; i >= 0; --i)
#define rrep3(i, m, n) for (int i = (int)(n)-1; i >= (m); --i)

#define endl '\n'
#define INF  0x7f7f7f7f7f7f7f7f
#define INFi 0x7f7f7f7f


ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

ll solve(ll N, int M, const vector<ll> & s, const vector<ll> & c) {
  // TODO: edit here
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  int M;
  cin >> N >> M;
  vector<ll> s(M), c(M);
  rep (i, M) {
    cin >> s[i] >> c[i];
  }

  auto ans = solve(N, M, s, c);
  cout << ans << endl;

  return 0;
}
