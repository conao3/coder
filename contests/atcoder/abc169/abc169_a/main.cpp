#include <iostream>
#include <tuple>
#include <cstdint>
#include <stack>
#include <unordered_map>
#include <unordered_set>
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


ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

ll solve(ll A, ll B) {
  return A*B;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll A, B;
  cin >> A >> B;

  auto ans = solve(A, B);
  cout << ans << endl;

  return 0;
}
