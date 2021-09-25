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

ll solve(const vector<ll> & a) {
  rep(i, 5)
    if (a[i]==0)
      return i+1;
  return -1;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // failed to analyze input format
  // TODO: edit here
  vector<ll> a(5);
  rep (i, 5) {
    cin >> a[i];
  }

  auto ans = solve(a);
  cout << ans << endl;

  return 0;
}
