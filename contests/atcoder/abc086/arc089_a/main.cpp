#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <tuple>
#include <cstdint>
#include <cstdio>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <cctype>
#include <cstdlib>
#include <cstring>

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
#define mset(x, val) memset(x,(val),sizeof(x))
#define cons(a, b) make_pair((a), (b))
#define car first
#define cdr second

#define endl '\n'
const ll   INF  = 0x7f7f7f7f7f7f7f7f;
const int  INFi = 0x7f7f7f7f;
const string YES = "Yes";
const string NO = "No";

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

bool solve(int N, vector<ll> & t, vector<ll> & x, vector<ll> & y) {
  t.insert(t.begin(), 0);
  x.insert(x.begin(), 0);
  y.insert(y.begin(), 0);
  rep(i, N) {
    ll res = t[i+1] - t[i];
    res -= abs(x[i+1]-x[i]) + abs(y[i+1]-y[i]);
    if (res < 0) return false;
    if (res % 2) return false;
  }
  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;
  vector<ll> t(N), x(N), y(N);
  rep (i, N) {
    cin >> t[i] >> x[i] >> y[i];
  }

  auto ans = solve(N, t, x, y);
  cout << (ans ? YES : NO) << endl;

  return 0;
}
