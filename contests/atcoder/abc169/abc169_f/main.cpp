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
#define all(x) x.begin(), x.end()
#define rall(x) x.end(x), x.begin()

#define endl '\n'
constexpr ll MOD = 998244353;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

ll solve(int N, ll S, const vector<ll> & A) {
  // TODO: edit here
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll N;
  ll S;
  cin >> N;
  vector<ll> A(N);
  cin >> S;
  rep (i, N) {
    cin >> A[i];
  }

  auto ans = solve(N, S, A);
  cout << ans << endl;

  return 0;
}
