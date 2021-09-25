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

auto solve(int N, int M, const vector<ll> & A, const vector<ll> & B, const vector<ll> & C, const vector<ll> & D, const vector<ll> & E, const vector<ll> & F) {
  // TODO: edit here
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, M;
  cin >> N;
  vector<ll> A(N), B(N), C(N);
  cin >> M;
  vector<ll> D(M), E(M), F(M);
  rep (i, N) {
    cin >> A[i] >> B[i] >> C[i];
  }
  rep (i, M) {
    cin >> D[i] >> E[i] >> F[i];
  }

  auto ans = solve(N, M, A, B, C, D, E, F);
  cout << isc << endl;

  return 0;
}
