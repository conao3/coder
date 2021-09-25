#include <iostream>
#include <vector>
#include <utility>
#include <tuple>
#include <cstdint>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <cctype>
#include <cstring>
#include <numeric>
#include <map>
#include <cstdio>

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

auto solve(int N, const vector<ll> & A, int Q, const vector<ll> & B, const vector<ll> & C) {
  ll tmp = 0;
  vector<ll> res;
  map<ll, ll> count;

  rep(i, N)
    count[A[i]]++;

  tmp = accumulate(all(A), 0);
  rep(i, Q) {
    ll from = B[i];
    ll to = C[i];
    tmp -= from*count[from];
    tmp += to*count[from];
    count[to] += count[from];
    count[from] = 0;
    res.push_back(tmp);
  }
  
  return res;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, Q;
  cin >> N;
  vector<ll> A(N);
  rep (i, N) {
    cin >> A[i];
  }
  cin >> Q;
  vector<ll> B(Q), C(Q);
  rep (i, Q) {
    cin >> B[i] >> C[i];
  }

  auto ans = solve(N, A, Q, B, C);
  rep (i, Q) {
    cout << ans[i] << endl;
  }

  return 0;
}
