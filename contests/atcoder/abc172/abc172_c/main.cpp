#include <vector>
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

ll solve(int N, int M, ll K, const vector<ll> & A, const vector<ll> & B) {
  ll k = 0;
  ll res = 0;
  ll ainx = 0, binx = 0;
  while (k<K) {
    if (A[ainx] < B[binx]) k += A[ainx], ainx++, res++;
    else k += B[binx], binx++, res++;
  }
  if (K<=k) return res;
  else return res-1;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll N, M;
  ll K;
  cin >> N;
  vector<ll> A(N+10, INF);
  cin >> M;
  vector<ll> B(M+10, INF);
  cin >> K;
  rep (i, N) {
    cin >> A[i];
  }
  rep (i, M) {
    cin >> B[i];
  }

  auto ans = solve(N, M, K, A, B);
  cout << ans << endl;

  return 0;
}
