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

bool solve(ll A, ll B, ll C) {
  vector<ll> a;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll A, B, C;
  cin >> A >> B >> C;

  auto ans = solve(A, B, C);
  cout << (ans ? YES : NO) << endl;

  return 0;
}
