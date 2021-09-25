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

auto solve(auto D, const vector<auto> & c, const vector<vector<auto> > & s) {
  // TODO: edit here
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<auto> D;
  vector<auto> c(26);
  cin >> D;
  vector<vector<auto> > s(D + 28, vector<auto>((26)));
  rep (i, 26) {
    cin >> c[i];
  }
  rep (j, D + 2) {
    rep (i, 26) {
      cin >> s[i + j][i];
    }
  }

  auto ans = solve(D, c, s);
  rep (i, D) {
    cout << t[i] << endl;
  }

  return 0;
}
