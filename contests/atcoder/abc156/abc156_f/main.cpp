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

auto solve(int k, int q, const vector<ll> & d, const vector<ll> & n, const vector<ll> & x, const vector<ll> & m) {
  // TODO: edit here
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int k, q;
  cin >> k;
  vector<ll> d(k);
  cin >> q;
  vector<ll> n(q), x(q), m(q);
  rep (i, k) {
    cin >> d[i];
  }
  rep (i, q) {
    cin >> n[i] >> x[i] >> m[i];
  }

  auto ans = solve(k, q, d, n, x, m);
  // failed to analyze output format
  // TODO: edit here
  cout << ans << endl;

  return 0;
}
