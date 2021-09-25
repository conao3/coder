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

auto solve(auto D, const vector<auto> & c, const vector<vector<auto> > & s, const vector<auto> & t, auto M, const vector<auto> & d, const vector<auto> & q) {
  // TODO: edit here
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<auto> D;
  auto c(26);
  auto M;
  cin >> D;
  vector<auto> s(D + 28, vector<auto>((26)));
  vector<auto> t(D);
  rep (i, 26) {
    cin >> c[i];
  }
  rep (j, D + 2) {
    rep (i, 26) {
      cin >> s[i + j][i];
    }
  }
  rep (i, D) {
    cin >> t[i];
  }
  cin >> M;
  vector<auto> d(M), q(M);
  rep (i, M) {
    cin >> d[i] >> q[i];
  }

  auto ans = solve(D, c, s, t, M, d, q);
  rep (i, M) {
    cout << v[i] << endl;
  }

  return 0;
}
