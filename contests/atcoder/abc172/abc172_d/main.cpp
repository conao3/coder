#include <iostream>
#include <utility>
#include <vector>
#include <map>

using namespace std;

typedef long long    ll;
typedef long double  ld;

#define rep(i, n)      for (int i = 0; i < (int)(n); ++i)
#define rep3(i, m, n)  for (int i = (m); i < (int)(n); ++i)
#define rrep(i, n)     for (int i = (int)(n)-1; i >= 0; --i)
#define rrep3(i, m, n) for (int i = (int)(n)-1; i >= (m); --i)

#define endl '\n'
#define INF  0x7f7f7f7f7f7f7f7f
#define INFi 0x7f7f7f7f


ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

vector<bool> memo(10000000);
vector<map<ll,ll>> db(10000000);

map<ll,ll> prime_factorize(ll N) {
  if (memo[N]) return db[N];

  map<ll,ll> res;
  for (ll a = 2; a * a <= N; ++a) {
    if (memo[N]) {
      for (auto elm : db[N])
        res[elm.first] += elm.second;
      N /= N;
    }

    if (N % a != 0) continue;
    ll ex = 0;
    while (N % a == 0) {
      ++ex;
      N /= a;
    }
    res[a] = ex;
  }
  if (N != 1) res[N] = 1;
  memo[N] = true, db[N] = res;
  return res;
}

ll solve(ll N) {
  ll res = 0;
  rep(i, N)
    res += (i+1) * [](auto obj) {
                     // for (auto elm : obj) printf("(%lld, %lld), ", elm.first, elm.second); printf("\n");
                     ll res = 1;
                     for (auto elm : obj)
                       res *= elm.second + 1;
                     // printf("res=%lld, ", res);
                     return res;
                   } (prime_factorize(i+1));
  return res;
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
