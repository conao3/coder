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


ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

auto solve(int N, const vector<ll> & V, const vector<ll> & W, int Q, const vector<ll> & v, const vector<ll> & L) {
    // TODO: edit here
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, Q;
    cin >> N;
    vector<ll> V(N), W(N);
    rep (i, N) {
        cin >> V[i] >> W[i];
    }
    cin >> Q;
    vector<ll> v(Q), L(Q);
    rep (i, Q) {
        cin >> v[i] >> L[i];
    }

    auto ans = solve(N, V, W, Q, v, L);
    // failed to analyze output format
    // TODO: edit here
    cout << ans << endl;

    return 0;
}
