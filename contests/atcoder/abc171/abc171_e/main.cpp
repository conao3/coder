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

vector<ll> solve(int N, const vector<ll> & a) {
  map<ll, ll> db;
  vector<ll> res;

  rep(i, N)
    rep(j, 31)
    if(a[i] & 1<<j) db[j]++;

  rep(j, 31)
    db[j] = N - db[j];

  rep(i, N){ 
    ll tmp = 0;
    rep(j, 31)
      if(db[j]) tmp += 1<<j, db[j]--;
    res.push_back(tmp);
  }
  return res;
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
  for (auto elm : ans)
    printf("%lld ", elm);
  printf("\n");

  return 0;
}
