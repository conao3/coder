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

auto solve(int H, ll W, const vector<ll> & A, const vector<ll> & B) {
  // TODO: edit here
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll H;
  ll W;
  cin >> H;
  vector<ll> A(H), B(H);
  cin >> W;
  rep (i, H) {
    cin >> A[i] >> B[i];
  }

  auto ans = solve(H, W, A, B);
  // failed to analyze output format
  // TODO: edit here
  cout << ans << endl;

  return 0;
}
