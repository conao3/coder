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

ll solve(int N, const vector<ll> & A, const vector<ll> & B) {
  ll pa = (N-1)/2;
  ll pb = (N-1)/2 + 1;
  if (N % 2 != 0) {
    return B[pa] - A[pa] + 1;
  } else {
    return 1;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;
  vector<ll> A(N), B(N);
  rep (i, N) {
    cin >> A[i] >> B[i];
  }

  auto ans = solve(N, A, B);
  cout << ans << endl;

  return 0;
}
