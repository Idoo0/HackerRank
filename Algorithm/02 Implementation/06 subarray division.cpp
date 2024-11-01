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
  ll n,d,m,sol=0,tempD;
  cin >> n;
  vll vect(n);
  for(int i=0; i<n; i++){
    cin >> vect[i];
  }
  cin >> d >> m;
  ll batas =  (n == 1)? n : n-1;
  for(int i=0; i<batas; i++){
    for(int j=i; j<n; j++){
      tempD = 0;
      // cout << "now is: " << i << " " << j << endl;
      for(int k=i; k<=j; k++){
        tempD += vect[k];
      }
      // cout << "tempD: " << tempD << " | m: " << j-i+1 << endl;
      if(tempD == d and j-i+1==m){
        sol++;
      }
    }
  }
  cout << sol;
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