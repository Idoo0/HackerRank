#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

int solving(vector<int> vect){

  int res=0, max=0;
  map<int,int> mp;

  for(int val : vect){
    mp[val]++;
    max = (mp[val] > max)? val : max;
  }
  for(auto val : mp){
  	cout << val.first << " " << val.second << endl;
  }
  cout << endl;
  res = vect.size() - max;
  cout << max << " " << res << endl;
  return res;
}

int main(){

  int n;
  cin >> n;
  vector<int> vect(n);
  for(int i=0; i<n; i++){
    cin >> vect[i];
  }
  cout << solving(vect);
}