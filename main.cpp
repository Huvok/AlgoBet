#include <bits/stdc++.h>
#include "Bet.h"
#include "BetSlip.h"

using namespace std;

#define FOR(i, a, b) for (ll i = ll(a); i < ll(b); i++)
#define ROF(i, a, b) for (ll i = ll(a); i >= ll(b); i--)
#define pb push_back
#define mp make_pair
#define all(a) (a).begin(), (a).end()
#define uni(a) (a).erase(unique(all(a)), (a).end())
#define lld I64d
#define ifile(a) freopen((a), "r", stdin)
#define ofile(a) freopen((a), "w", stdout)
#define sync                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)
#define PI 3.1415926535897932384626433832795
#define mem(x, val) memset((x), (val), sizeof(x))
#define sz(x) (ll)(x).size()
#define endl '\n'
#define oo 2000000000000000000LL
#define EPS 1e-6

typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll, ll> ii;
typedef pair<ii, ll> iii;
typedef vector<ii> vii;
typedef vector<pair<ii, ll>> viii;

int fastPow(ll x, ll n) {
  ll ret = 1;
  while (n > 0) {
    if (n & 1) ret = ret * x;
    x = x * x;
    n >>= 1;
  }

  return ret;
}

int main() {
  cout << fixed << setprecision(2);
  Bet bets[4];
  ll n = 4;
  bets[0] = Bet("Griffin", "Invictus Gaming", 1.72, 2.00);
  bets[1] = Bet("FunPlus Phoenix", "Fnatic", 1.53, 2.37);
  bets[2] = Bet("SK Telecom T1", "Splyce", 1.006, 17.00);
  bets[3] = Bet("DAMWON Gaming", "G2 Esports", 2.00, 1.72);

  vector<BetSlip> betSlips;
  ll mask = fastPow(2, n);
  FOR(i, 1, mask) {
    for (int j = mask; j > 0; j = (j - 1) & i) {
      betSlips.pb(BetSlip());
      FOR(k, 0, n) {
        cout << mask << endl;
        if ((1LL << k) & i) {
          betSlips[sz(betSlips) - 1].pushBet(Bet(bets[k]), (1LL << k) & j);
        }
      }
    }
  }

  FOR(i, 0, sz(betSlips)) { cout << betSlips[i] << endl; }

  return 0;
}
