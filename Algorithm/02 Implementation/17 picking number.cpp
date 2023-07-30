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

  int solution = 0, temp;
  vector<int> uVect = vect;
  vector<pair<int,int>> val_pair;

  sort(uVect.begin(), uVect.end());
  
  auto it = unique(uVect.begin(), uVect.end());
  uVect.resize(distance(uVect.begin(), it));

  for(int val : uVect)
    val_pair.push_back(make_pair(val,count(vect.begin(), vect.end(),val)));
  
  sort(val_pair.begin(), val_pair.end());
  
  // ini for 2 angka (n, n+1)
  for(int i=0; i<val_pair.size() - 1; i++){
    if(abs(val_pair[i].first - val_pair[i+1].first) <= 1){
      temp = val_pair[i].second + val_pair[i+1].second;
      solution = (solution > temp)? solution : temp;
    }
  }
  // ini for yang cuman 1
  for(int i=0; i<val_pair.size(); i++){
    temp = val_pair[i].second;
    solution = (solution > temp)? solution : temp; 
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
