#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

void solving(vector<int> vect){
  vector<int> res; int s;
  sort(vect.begin(), vect.end());

  while(vect.size() > 0){
    
    s = vect[0];
    res.push_back(vect.size());
    
    for(int i=0; i<vect.size(); i++){
      vect[i] -= s;
      if(vect[i] == 0){
        vect.erase(vect.begin() + i);
        i = -1;
      }
    }
  }

  for(int val : res){
    cout << val << endl;
  }
}

int main(){

  int n;
  cin >> n;
  vector<int> vect(n);
  for(int i=0; i<n; i++){
    cin >> vect[i];
  }
  solving(vect);
}