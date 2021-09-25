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

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, Q;
  cin >> N;
  vector<ll> A(N), B(N);
  cin >> Q;
  vector<ll> C(Q), D(Q);
  rep(i, N) cin >> A[i] >> B[i];
  rep(i, Q) cin >> C[i] >> D[i];

  ll Bn = 200000;
  vector<priority_queue<ll>> person(Bn);
  priority_queue<ll, vector<ll>, greater<ll>> point;

  rep(i, N) person[B[i]].push(i);
  rep(i, Bn)
    rep(i, N) {
    printf("%lld, ", db.top());
    db.pop();
  }
  printf("\n");
  return 0;
}
