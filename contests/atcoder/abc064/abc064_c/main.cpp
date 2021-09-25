#include <algorithm>
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <tuple>
#include <cstdint>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <bitset>
#include <cctype>
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
#define INF  0x7f7f7f7f7f7f7f7f
#define INFi 0x7f7f7f7f


ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

pll solve(int N, const vector<ll> & a) {
  int joker = false;
  bitset<8> res(0);
  rep(i, N) {
    int inx = a[i]  < 400 ? 0
              : a[i]< 800 ? 1
              : a[i]<1200 ? 2
              : a[i]<1600 ? 3
              : a[i]<2000 ? 4
              : a[i]<2400 ? 5
              : a[i]<2800 ? 6
              : a[i]<3200 ? 7 : 8;
    if (inx != 8) res[inx]=1;
    else joker++;
  }
  ll mincolor = res.count()!=0 ? res.count() : 1;
  ll maxcolor = res.count()+joker;
  return cons(mincolor, maxcolor);
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
  // failed to analyze output format
  // TODO: edit here
  cout << ans.car << " " << ans.cdr << endl;

  return 0;
}
