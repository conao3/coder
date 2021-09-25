#include <iostream>
#include <string>
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
const string YES = "Yes";
const string NO = "No";

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

void solve(int N, ll K, const vector<ll> & A) {
  // TODO: edit here
  ll res=1, tmp=1;
  rep(i, K) res*=A[i];
  tmp = res;
  rep3(i, K, N) {
    tmp /= A[i-K];
    tmp *= A[i];
    printf("%lld, %lld!!\n", A[i-K], A[i]);
    printf("%lld, %lld\n", res, tmp);
    if (res<tmp) cout << YES << endl;
    else cout << NO << endl;
    res = tmp;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll N;
  ll K;
  cin >> N;
  vector<ll> A(N);
  cin >> K;
  rep (i, N) {
    cin >> A[i];
  }

  solve(N, K, A);

  return 0;
}
