#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

vvl m;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  m = vvl(101, vl(101, 0));

  for (const auto& i : ranges::iota_view(0, 4)) {
    ll l, t, r, b;
    cin >> l >> t >> r >> b;

    for (const auto& y : ranges::iota_view(t, b)) {
      for (const auto& x : ranges::iota_view(l, r)) {
        m[y][x] = 1;
      }
    }
  }

  auto ans = 0LL;
  for (const auto& y : ranges::iota_view(0, 101)) {
    for (const auto& x : ranges::iota_view(0, 101)) {
      ans += m[y][x];
    }
  }

  cout << ans;

  return 0;
}
