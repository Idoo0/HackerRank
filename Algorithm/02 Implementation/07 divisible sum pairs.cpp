#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

int solving(vector<int> vect, int k){

  int solution = 0;

  for(int i=0; i<vect.size(); i++){
    for(int j=0; j<vect.size(); j++){
      if((i < j) and ((vect[i] + vect[j]) % k == 0)){
        solution++;
      }
    }
  }

  return solution;
}

int main(){

  int n,k;
  cin >> n >> k;
  vector<int> vect(n);
  for(int i=0; i<n; i++){
    cin >> vect[i];
  }
  cout << solving(vect,k);
}
