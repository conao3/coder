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
const string YES = "YES";
const string NO = "NO";

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

bool solve(ll A, ll V, ll B, ll W, ll T) {
  if (A == B) return true;
  if (!(A < B)) {
      ll tmp = A;
      A = B;
      B = tmp;
    }
  B += W*T;
  A += V*T;
  if (A < B) return false;
  else return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll A, V, B, W, T;
    cin >> A >> V >> B >> W >> T;

    auto ans = solve(A, V, B, W, T);
    cout << (ans ? YES : NO) << endl;

    return 0;
}
