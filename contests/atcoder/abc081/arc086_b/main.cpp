#include <iostream>
#include <iterator>
#include <vector>
#include <utility>
#include <tuple>
#include <cstdint>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <cctype>
#include <cstring>
#include <algorithm>

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

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;
  vector<ll> a(N);
  rep (i, N) {
    cin >> a[i];
  }

  auto minmax = minmax_element(all(a));
  auto m = *minmax.car;
  auto M = *minmax.cdr;
  int minx = distance(a.begin(), minmax.car);
  int Minx = distance(a.begin(), minmax.cdr);
  
  if (m>=0) {
    printf("%d\n", N-1);
    rep(i, N-1) printf("%d %d\n", i+1, i+2);
    return 0;
  }
  if (M<=0) {
    printf("%d\n", N-1);
    rrep(i, N-1) printf("%d %d\n", i+2, i+1);
    return 0;
  }
  if (abs(M)<=abs(m)) {
    printf("%d\n", N+(N-1));
    rep(i, N) printf("%d %d\n", Minx+1, i+1);
    rep(i, N-1) printf("%d %d\n", i+1, i+2);
    return 0;
  } else {
    printf("%d\n", N+(N-1));
    rep(i, N) printf("%d %d\n", minx+1, i+1);
    rrep(i, N-1) printf("%d %d\n", i+1, i+2);
    return 0;
  }
}
