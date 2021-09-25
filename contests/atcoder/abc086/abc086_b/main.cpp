#include <iostream>
#include <string>
#include <utility>
#include <tuple>
#include <cstdint>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <cctype>
#include <cmath>
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

bool solve(string a, string b) {
  ll x = stoi(a+b);
  rep(i, 1000) if (x==i*i) return 1;
  return 0;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string a, b;
  cin >> a >> b;

  auto ans = solve(a, b);
  cout << (ans ? YES : NO) << endl;

  return 0;
}
