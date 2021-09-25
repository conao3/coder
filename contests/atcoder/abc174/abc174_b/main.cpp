#include <iostream>
#include <vector>

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

ll solve(int N, ll D, const vector<ll> & X, const vector<ll> & Y) {
  ll res = 0;
  rep(i, N)
    if ((X[i]*X[i]+Y[i]*Y[i]) <= D*D) res++;
  return res;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll N;
  ll D;
  cin >> N;
  vector<ll> X(N), Y(N);
  cin >> D;
  rep (i, N) {
    cin >> X[i] >> Y[i];
  }

  auto ans = solve(N, D, X, Y);
  cout << ans << endl;

  return 0;
}
