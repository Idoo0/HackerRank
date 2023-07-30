#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <map>
#include <unordered_map>

using namespace std;

int solving(vector<int> vect){

  int solution;
  sort(vect.begin(), vect.end());
  map<int,int> val_map;

  for(int val : vect){
    val_map[val]++;
  }
  
  int max = 0;
  
  for(auto val : val_map){
    
    if(val.second > max){
      max = val.second;
      solution = val.first;
    }
    
  }
  return solution;
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
