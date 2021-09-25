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
#define all(x) begin(x), end(x)
#define rall(x) end(x), begin(x)

#define endl '\n'


ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

string solve(ll N) {
  N %= 10;
  if (N == 2 || N == 4 || N == 5 || N == 7 || N == 9) {
    return "hon";
  } else if (N == 0 || N == 1 || N == 6 || N == 8) {
    return "pon";
  } else {
    return "bon";
  }
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
