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
constexpr ll MOD = 998244353;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

ll solve(ll N, int K, const vector<ll> & L, const vector<ll> & R) {
  // TODO: edit here
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  int K;
  cin >> N >> K;
  vector<ll> L(K), R(K);
  rep (i, K) {
    cin >> L[i] >> R[i];
  }

  auto ans = solve(N, K, L, R);
  cout << ans << endl;

  return 0;
}
