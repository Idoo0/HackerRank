#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>
using namespace std;

int solving(int n, int c, int m){

  int res=0, wrappers=0, choco=0;

  wrappers = n/c;
  res += wrappers; 
  while(wrappers >= m){
    choco = wrappers / m;
    wrappers = (wrappers % m) + choco;
    res += choco;
  }

  return res;
}

int main(){

  int t,n,c,m;

  cin >> t;
  while(t--){
    cin >> n >> c >> m;
    cout << solving(n,c,m) << endl;
  }
}