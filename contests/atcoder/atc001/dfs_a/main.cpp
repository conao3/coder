#include <string>
#include <vector>
#include <iostream>

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
const string YES = "Yes";
const string NO = "No";

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

// def: vector<vector<int>> g(N);
// def: vector<bool> used(N);
// call: dfs(0, g, used);
void dfs(int v, vector<vector<int>> &g, vector<bool> &used) {
  used[v] = true;
  for (auto elm : g[v])
    if (!used[elm])
      dfs(elm, g, used);
}


// def: vector<vector<int>> g(N);
// def: vector<bool> used(N);
// call: dfs(0, g, used);
void dfs(int x, int y, const vector<vector<char>> &g, vector<vector<bool>> &used) {
  if (x < 0 && x < g.size()) return;
  if (y < 0 && y < g[0].size()) return;
  used[x][y] = true;
  dfs(x+1, y, g, used);
  dfs(x-1, y, g, used);
  dfs(x, y+1, g, used);
  dfs(x, y-1, g, used);
}

bool solve(vector<vector<char>> &c) {
  vector<vector<bool>> used(c.size(), vector<bool>(c[0].size()));
  pair<int, int> s, g;

  rep(i, c.size())
    rep(j, c[i].size())
    if (c[i][j]=='s') s = make_pair(i, j);
    else if (c[i][j]=='g') g = make_pair(i, j);
    else if (c[i][j]=='#') used[i][j] = true;


  make_pair(x, y);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int h, w;
  cin >> h >> w;
  vector<vector<char>> c(h, vector<char>(w));
  rep(i, h)
    rep(j, w)
    cin >> c[i][j];

  auto ans = solve(c);
  cout << (ans ? YES : NO) << endl;

  return 0;
}
