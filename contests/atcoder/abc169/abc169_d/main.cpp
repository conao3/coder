#include <iostream>
#include <tuple>
#include <cstdint>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <cctype>
#include <utility>
#include <cstdio>
#include <vector>
#include <cmath>

using namespace std;

#define ll long long
#define ld long double

#define rep(i, n)      for (int i = 0; i < (int)(n); ++i)
#define rep3(i, m, n)  for (int i = (m); i < (int)(n); ++i)
#define rrep(i, n)     for (int i = (int)(n)-1; i >= 0; --i)
#define rrep3(i, m, n) for (int i = (int)(n)-1; i >= (m); --i)
#define all(x) begin(x), end(x)
#define rall(x) end(x), begin(x)

#define endl '\n'
constexpr ll MOD = 1000000007;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

vector<pair<ll, ll>> prime_factorize(ll N) {
  vector<pair<ll, ll>> res;
  for (ll a = 2; a * a <= N; ++a) {
    if (N % a != 0) continue;
    ll ex = 0;
    while (N % a == 0) {++ex, N /= a;}
    res.push_back({a, ex});
  }

  if (N != 1) res.push_back({N, 1});
  return res;
}

ll solve(ll N) {
  auto primes = prime_factorize(N);
  ll res = 0;
  for (auto elm : primes) {
    res += (ll)floor(0.5*(-1+sqrt(8.0*elm.second+1)));
  }
  return res;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll N;
  cin >> N;

  auto ans = solve(N);
  cout << ans << endl;

  return 0;
}
