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

auto solve(int N, int M, const vector<ll> & A, const vector<ll> & B, const vector<ll> & L, const vector<ll> & R) {
  // TODO: edit here
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, M;
  cin >> N;
  vector<ll> A(N), B(N);
  cin >> M;
  vector<ll> L(M), R(M);
  rep (i, N) {
    cin >> A[i] >> B[i];
  }
  rep (i, M) {
    cin >> L[i] >> R[i];
  }

  auto ans = solve(N, M, A, B, L, R);
  cout << k << endl;
  rep (i, k) {
    cout << c[i] << endl;
  }
  cout << endl;

  return 0;
}
