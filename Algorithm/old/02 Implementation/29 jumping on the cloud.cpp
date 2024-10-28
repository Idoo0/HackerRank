#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

int solving(vector<int> isThunder, int k){

  int energy = 100, pos = 0, length = isThunder.size();

  while(true){
    pos += k;
    
    if(pos >= length) pos -= length;
    energy -= (isThunder[pos])? 3 : 1;
    
    if(pos == 0){
      break;
    }
  }
  return energy;
}

int main(){

  int n,k;
  cin >> n >> k;
  vector<int> thunder(n);
  for(int i=0; i<n; i++){
    cin >> thunder[i];
  }
  cout << solving(thunder, k);
}