#include <iostream>
#include <vector>
#include <tuple>
#include <cstdint>
#include <cstdio>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <cctype>
#include <cstdlib>
#include <algorithm>

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
#define all(x) x.begin(), x.end()
#define rall(x) x.end(x), x.begin()

#define endl '\n'


ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

auto solve(int N, ll K, vector<ll> &A) {
  vector<ll> B(N);
  vector<ll> *Anow, *Anew, *Atmp;

  Anow = &A;
  Anew = &B;
  rep(i, min(K, 100)) {
    rep(j, N)
      (*Anew)[j] = 0;
    rep(j, N) {
      rep3(k, 0, N) {
        if (0<=k && k<N) {
          if (abs(k-j) <= (*Anow)[k]){
            (*Anew)[j] += 1;
          }
        }
      }
    }
    Atmp = Anow;
    Anow = Anew;
    Anew = Atmp;
  }

  return *Anow;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll N;
    ll K;
    cin >> N;
    vector<ll> A(N);
    cin >> K;
    rep (i, N) {
        cin >> A[i];
    }

    auto ans = solve(N, K, A);
    // failed to analyze output format
    // TODO: edit here
    // cout << ans << endl;
    rep(i, N)
      printf("%lld ", ans[i]);
    printf("\n");

    return 0;
}
