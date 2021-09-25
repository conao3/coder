#include <iostream>
#include <limits.h>

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

int db[1000000];

ll solve(ll K) {
  ll tmp;
  int pnt;

  // for (tmp=1; tmp<LLONG_MAX>>1; tmp = tmp*10+1) {
  //   pnt = tmp % K;
  //   if (pnt == 0) return to_string(tmp).length();
  //   else if(db[pnt] == true) return -1;
  //   else db[pnt] = true;
  // }
  rep(i, 1000000)
  return -1;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll K;
  cin >> K;

  auto ans = solve(K);
  cout << ans << endl;

  return 0;
}
