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

ll solve(int N, const vector<ll> & L) {
  ll res=0;
  ll a, b, c;
  rep(i, N)
    rep3(j, i, N)
    rep3(k, j, N)
    if (i!=j && j!=k && k!=i){
      a=L[i], b=L[j], c=L[k];
      if (a!=b && b!=c && c!=a)
        if (a+b>c && b+c>a && c+a>b)
          res++;
    }

  return res;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;
  vector<ll> L(N);
  rep (i, N) {
    cin >> L[i];
  }

  auto ans = solve(N, L);
  cout << ans << endl;

  return 0;
}
