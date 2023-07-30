#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

int solving(vector<int> vect){

  int solution = 0;
  for(int val : vect){
    solution += val;
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
