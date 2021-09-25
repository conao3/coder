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

auto solve(int N, int Q, const vector<ll> & c, const vector<ll> & l, const vector<ll> & r) {
  // TODO: edit here
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, Q;
  cin >> N;
  vector<ll> c(N);
  cin >> Q;
  vector<ll> l(Q), r(Q);
  rep (i, N) {
    cin >> c[i];
  }
  rep (i, Q) {
    cin >> l[i] >> r[i];
  }

  auto ans = solve(N, Q, c, l, r);
  // failed to analyze output format
  // TODO: edit here
  cout << ans << endl;

  return 0;
}
