#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <cstdint>
#include <cstdio>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <cctype>
#include <functional>

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


ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

// vector<pair<ll, ll>> prime_factorize(ll N) {
//   vector<pair<ll, ll>> res;
//   for (ll a = 2; a * a <= N; ++a) {
//     if (N % a != 0) continue;
//     ll ex = 0;
//     while (N % a == 0) {++ex, N /= a;}
//     res.push_back({a, ex});
//   }

//   if (N != 1) res.push_back({N, 1});
//   return res;
// }

ll solve(ll N, const vector<ll> & A) {
  ll res = N;
  
  rep(i, N) printf("%lld, ", A[i]); printf("\n");
  // rep(i, N)
  //   rep3(k, i+1, N)
  //   if(max(A[i],A[k])%min(A[i],A[k])==0){ printf("%d, %d\n", i, k); --res; break; }
  
  return res;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll N;
  cin >> N;
  vector<ll> A(N);
  rep (i, N) {
    cin >> A[i];
  }

  sort(all(A));
  
  auto ans = solve(N, A);
  cout << ans << endl;

  return 0;
}
