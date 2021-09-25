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

typedef long long    ll;
typedef long double  ld;
typedef pair<ll, ll> pll;
typedef pair<ld, ld> pld;

#define rep(i, n)      for (int i = 0; i < (int)(n); ++i)
#define rep3(i, m, n)  for (int i = (m); i < (int)(n); ++i)
#define rrep(i, n)     for (int i = (int)(n)-1; i >= 0; --i)
#define rrep3(i, m, n) for (int i = (int)(n)-1; i >= (m); --i)
#define all(x) begin(x), end(x)
#define rall(x) end(x), begin(x)
#define mset(x, val) memset(x,(val),sizeof(x))
#define cons(a, b) make_pair((a), (b))
#define car first
#define cdr second

#define endl '\n'
const ll   INF  = 0x7f7f7f7f7f7f7f7f;
const int  INFi = 0x7f7f7f7f;


ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

auto solve(auto N, const vector<auto> & p) {
  // TODO: edit here
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  auto N;
  cin >> N;
  vector<auto> p(N - 1);
  rep (i, N - 1) {
    cin >> p[i];
  }

  auto ans = solve(N, p);
  cout << T << endl;

  return 0;
}
