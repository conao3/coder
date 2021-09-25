#include <cstdio>
#include <iostream>
#include <vector>

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

ll solve(int N, const vector<ll> & a) {
  ll ret=0;
  for (int i=0; i<a.size(); i+=2)
    if (a[i] % 2 == 1) ret++;
  return ret;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;
  vector<ll> a(N);
  rep (i, N) {
    cin >> a[i];
  }

  auto ans = solve(N, a);
  cout << ans << endl;

  return 0;
}
