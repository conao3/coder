#include <iostream>
#include <vector>
#include <cstdio>

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

ll solve(ll h, ll w, ll ch, ll cw, vector<vector<char>> a) {
  rep(i, w)
    rep(i, h) {
    printf("%c, ", a[h][w]);
    printf("\n");
  }
  return 0;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int h, w;
  cin >> h >> w;
  int ch, cw;
  cin >> ch >> cw;
  vector<vector<char>> a(h, vector<char>(w));
  // rep(i, w)
  //   rep(i, h)
  //   cin >> a[h][w];

  auto ans = solve(h, w, ch, cw, a);
  cout << ans << endl;

  return 0;
}
