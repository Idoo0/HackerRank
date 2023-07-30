#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

int solving(vector<vector<int>> vect, int n){

  int d1 = 0, d2 = 0;
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(i-j == 0){
        d1 += vect[i][j];
      }
      if(i+j == n-1){
        d2 += vect[i][j];
      }
    }
  }
  
  return abs(d1-d2);
}

int main(){

  int n;
  cin >> n;
  vector <vector<int>> vect(n, vector<int> (n));
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      cin >> vect[i][j];
    }
  }
  cout << solving(vect, n);
}
