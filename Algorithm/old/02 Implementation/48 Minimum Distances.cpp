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

  int res=10e6, temp=0;
  for(int i=0; i<vect.size() - 1; i++){
    for(int j=i+1; j<vect.size(); j++){
      if(vect[i] == vect[j]){
        temp = abs(i - j);
        res = min(res, temp);
      }
    }
  }

  return (res == 10e6)? -1 : res;
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