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

ll solve(string S) {
  ll res=0;
  if (S[0]=='R' || S[1]=='R' || S[2]=='R') res++;
  if (S[0]=='R' && S[1]=='R') res++;
  if (S[1]=='R' && S[2]=='R') res++;
  return res;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string S;
  cin >> S;

  auto ans = solve(S);
  cout << ans << endl;

  return 0;
}
