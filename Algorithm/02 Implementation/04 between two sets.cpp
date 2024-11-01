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
  
  ll n,m,ans; cin >> n >> m;
  vll vn(n), vm(m);
  for(int i=0; i<n; i++){
    cin >> vn[i];
  }
  for(int i=0; i<m; i++){
    cin >> vm[i];
  }

  ans=0;
  for(int i=1; i<=100; i++){
    // cout << "its: " << i << endl;
    bool cond = true;
    //1
    for(int j=0; j<n; j++){
      if(i%vn[j] != 0){
        cond = false;
        // cout << "halo vn!" << endl;
        break;
      }
    }
    if(!cond) continue;

    //2
    for(int j=0; j<m; j++){
      if(vm[j]%i != 0){
        cond = false;
        // cout << "halo vm!" << endl;
        break;
      }
    }

    if(cond) ans++;
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