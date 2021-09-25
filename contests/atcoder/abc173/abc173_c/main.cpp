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

ll solve(auto H, auto W, auto K, const vector<vector<auto> > & c) {
  // TODO: edit here
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  auto H, W, K;
  cin >> H >> W;
  vector<vector<auto> > c(H + W + 4, vector<auto>((H + W + 4)));
  cin >> K;
  rep (j, H + 4) {
    rep (i, W) {
      cin >> c[i + j][i + j];
    }
  }

  auto ans = solve(H, W, K, c);
  cout << ans << endl;

  return 0;
}
