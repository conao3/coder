#include <iostream>
#include <vector>
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

ll solve(int N, const vector<ll> & A) {
  ll tmp = 1;
  rep(i, N)
    if (A[i] == 0)
      return 0;
  
  rep(i, N)
    if ((ll)1000000000000000000 < (tmp *= A[i])) 
      return -1;

  return tmp;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;
  vector<ll> A(N);
  rep (i, N) {
    cin >> A[i];
  }

  auto ans = solve(N, A);
  cout << ans << endl;

  return 0;
}
