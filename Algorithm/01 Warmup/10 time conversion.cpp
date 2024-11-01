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
  
  st times;
  cin >> times;
  st back = times.substr(10-2);
  
  if(back == "AM"){
    if(times.substr(0,2) == "12"){
      times.replace(0,2,"00");
    }
  }else {
    if(times.substr(0,2) != "12"){
      int val = stoi(times.substr(0,2)) + 12;
      if(val >= 10){
        times.replace(0,2,to_string(val));
      }else{
        times.replace(0,2, ("0" + to_string(val)));
      }
    }
  }
  times.replace(10-2,2,"");
  cout << times;
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