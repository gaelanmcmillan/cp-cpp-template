#if NOT_LINUX
#include "macos_includes.h"
#else
#include <bits/stdc++.h>
#endif

#if LOCAL
#include "debug.h"
#include "gxlib.h"
#else
#define dbg(...) 'x'
#endif

using namespace std;
using ll = long long;
const char nl = '\n';
const int MAX_INT = std::numeric_limits<int>::max();
const ll MAX_LL = std::numeric_limits<ll>::max();

void solve() {

}


int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  for (int tc = 1; tc <= t; ++tc) {
    //cout << "Case " << tc << ":\n";
    solve();
  }
  return 0;
}

