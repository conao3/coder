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

auto solve(int N, ll A, const vector<char> & op, const vector<ll> & B) {
  // TODO: edit here
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll N;
  ll A;
  cin >> N;
  vector<ll> op(N);
  vector<ll> B(N);
  cin >> A;
  rep (i, N) {
    cin >> op[i] >> B[i];
  }

  auto ans = solve(N, A, op, B);
  // failed to analyze output format
  // TODO: edit here
  cout << ans << endl;

  return 0;
}
