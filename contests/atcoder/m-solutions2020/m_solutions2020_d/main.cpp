#include <iostream>
#include <vector>
#include <algorithm>

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

ll solve(int N, const vector<ll> & A) {
  // TODO: edit here
  ll i=0, M=0, m=0, buy=0, count=0, res=1000;
  while (i<N) {
    M = [&]() {
          ll res=0;
          rep3(j, i+1, N) res = max(res, A[j]);
          return res;
        } ();
    m = [&]() {
          ll res=INF;
          rep3(j, i+1, N) res = min(res, A[j]);
          return res;
        } ();
    
    if ([&]() {
          ll ifres = res + A[i]*count;
          ll b = m;
          ll c = res/b;
          ifres += (M-b)*c;
          if (ifres > (res + M*count)) return true;
          else return false;
        }()) {
      buy = A[i];
      count = res/buy;
      res -= buy*count;
    }
    
    i++;
  }
  printf("%lld", M);
  return res;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;
  vector<ll> A(N);
  rep (i, N) {
    cin >> A[i];
  }

  auto ans = solve(N, A);
  cout << ans << endl;

  return 0;
}
