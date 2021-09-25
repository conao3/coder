#include <iostream>
#include <string>
#include <algorithm>
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

#define max(a, b) (a)<(b)?(b):(a)
#define min(a, b) (a)<(b)?(a):(b)
#define rep(i, n)      for (int i = 0; i < (int)(n); ++i)
#define rep3(i, m, n)  for (int i = (m); i < (int)(n); ++i)
#define rrep(i, n)     for (int i = (int)(n)-1; i >= 0; --i)
#define rrep3(i, m, n) for (int i = (int)(n)-1; i >= (m); --i)
#define all(x) begin(x), end(x)
#define rall(x) end(x), begin(x)

#define endl '\n'


ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

string solve(ll K, string S) {
  if ((ll)S.length() <= K) {
    return S;
  } else {
    return S.substr(0, K) + "...";
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll K;
  string S;
  cin >> K >> S;

  auto ans = solve(K, S);
  cout << ans << endl;

  return 0;
}
