#include <iostream>
#include <vector>
#include <utility>
#include <tuple>
#include <cstdint>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <cctype>

using namespace std;

#define ll long long
#define ld long double

#define rep(i, n)      for (int i = 0; i < (int)(n); ++i)
#define rep3(i, m, n)  for (int i = (m); i < (int)(n); ++i)
#define rrep(i, n)     for (int i = (int)(n)-1; i >= 0; --i)
#define rrep3(i, m, n) for (int i = (int)(n)-1; i >= (m); --i)
#define all(x) begin(x), end(x)
#define rall(x) end(x), begin(x)
#define cons(a, b) make_pair((a), (b))
#define car first
#define cdr second

#define endl '\n'


ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

ll solve(int N, const vector<ll> & H) {
  int cost = 0;
  pair<ll, ll> res = cons(0, 0);
  rep3(i, 1, N)
    if (H[i-1]<H[i]) cost = 0;
    else {
      cost++;
      if(res.car < cost) res = cons(cost, i);
    }
  return res.car;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;
  vector<ll> H(N);
  rep (i, N) {
    cin >> H[i];
  }

  auto ans = solve(N, H);
  cout << ans << endl;

  return 0;
}
