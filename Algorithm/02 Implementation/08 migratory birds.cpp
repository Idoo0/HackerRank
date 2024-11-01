#include <bits/stdc++.h>
using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define st string
#define ll long long
#define ld long double
#define ull unsigned long long

#define pll pair<ll, ll>
#define tll tuple<ll, ll, ll>
#define sll set<ll>
#define mll map<ll, ll>
#define ssll set<sll>
#define vll vector<ll>
#define vpll vector<pll>
#define vtll vector<tll>
#define vvll vector<vll>
#define vvpll vector<vpll>
#define vpllvll vector<pair<ll, vll>>

#define fi first
#define se second
#define pb push_back

#define mp make_pair
#define mt make_tuple

#define mx max
#define mn min

#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int solve() {
  ll n,bird,max_count=LLONG_MIN,ans=LLONG_MAX; cin >> n;
  map<int, int> counter;
  while(n--){
    cin >> bird;
    counter[bird]++;
  }

  for(auto val : counter){
    // cout << val.first << " " << val.second << endl;
    if(val.second >= max_count){
      // cout << "hai!";
      if (val.second == max_count) ans = min(ans, (long long)val.first);
      else ans = val.first;
      max_count = val.second;
    }
  }
  cout << ans;
  return 0;
}

int main() {
  fastio;

  int t = 1;
  // int t; cin >> t; 

  while(t--){
    solve();
  }

  return 0;
}