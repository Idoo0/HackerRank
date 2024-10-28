#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

int solving(vector<int> vect, int k){

  int res=0;
  unordered_map<int,int> mp;
  if(k == 1 or k == 0){
    return 1;
  }
  for(int val : vect){
    mp[val%k]++;
  }
  
  for(int i=0; i<=k/2; i++){
    if(i == (k-i)%k){
      res += min(1,mp[i]);
    }else{
      res += max(mp[i], mp[k-i]);
    }
  }
  return res;
}

int main(){

  int n,k;
  cin >> n >> k;
  vector<int> vect(n);
  for(int i=0; i<n; i++){
    cin >> vect[i];
  }
  cout << solving(vect, k);
}