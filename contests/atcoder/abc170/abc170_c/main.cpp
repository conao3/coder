#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <tuple>
#include <cstdint>
#include <cstdio>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <deque>
#include <unordered_map>
#include <unordered_set>
#include <bitset>
#include <cctype>

using namespace std;

#define ll long long
#define ld long double
#define v vector

#define rep(i, n)      for (int i = 0; i < (int)(n); ++i)
#define rep3(i, m, n)  for (int i = (m); i < (int)(n); ++i)
#define rrep(i, n)     for (int i = (int)(n)-1; i >= 0; --i)
#define rrep3(i, m, n) for (int i = (int)(n)-1; i >= (m); --i)
#define all(x) begin(x), end(x)
#define rall(x) end(x), begin(x)

#define endl '\n'


ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

ll solve(ll X, ll N, const vector<ll> & p) {
  vector<bool> db(110, 0);
  ll res;
  rep(i, N)
    db[p[i]] = true;

  ll i = X;
  while (db[i] == true && i < 110) ++i;
  res = i;
  i = X;
  while (db[i] == true && 0 <= i) --i;

  if (X-i <= res-X) return i;
  else return res;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll X, N;
  cin >> X >> N;
  if (N == 0) {
    cout << X << endl;
    return 0;
  }
  vector<ll> p(N);
  rep (i, N) {
    cin >> p[i];
  }

  auto ans = solve(X, N, p);
  cout << ans << endl;

  return 0;
}
