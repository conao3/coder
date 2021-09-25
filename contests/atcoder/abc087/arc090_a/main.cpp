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
#include <cmath>

using namespace std;

typedef long long    ll;
typedef long double  ld;
typedef pair<ll, ll> pll;
typedef pair<ld, ld> pld;

template <typename T> bool chmax(T &a, T& b) {if (a < b) {a = b; return true;} return false;}
template <typename T> bool chmin(T &a, T& b) {if (a > b) {a = b; return true;} return false;}
#define rep(i, n)      for (int i = 0; i < (int)(n); ++i)
#define rep3(i, m, n)  for (int i = (m); i < (int)(n); ++i)
#define rrep(i, n)     for (int i = (int)(n)-1; i >= 0; --i)
#define rrep3(i, m, n) for (int i = (int)(n)-1; i >= (m); --i)
#define all(x) x.begin(), x.end()
#define rall(x) x.end(), x.begin()
#define mset(x, val) memset(x, (val), sizeof(x))
#define cons(a, b) make_pair((a), (b))
#define car first
#define cdr second

#define endl '\n'
#define INF  0x7f7f7f7f7f7f7f7f
#define INFi 0x7f7f7f7f


ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

ll solve(int N, const vector<ll> & a, const vector<ll> & b) {
  vector<ll> res(N);
  rep(i, N) {
    ll tmp=0;
    rep(k, i+1) tmp+=a[k];
    rep3(k, i, N) tmp+=b[k];
    res[i] = tmp;
  }
  return *max_element(all(res));
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // failed to analyze input format
  // TODO: edit here
  int n;
  cin >> n;
  vector<ll> a(n);
  vector<ll> b(n);
  rep (i, n) {cin >> a[i];}
  rep (i, n) {cin >> b[i];}

  auto ans = solve(n, a, b);
  cout << ans << endl;

  return 0;
}
