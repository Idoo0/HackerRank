#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

long long solving(vector<long long> vect){

  long long solution = 0;
  for(long long val : vect){
    solution += val;
  }
  return solution;
}

int main(){

  int n;
  cin >> n;
  vector<long long> vect(n);
  for(int i=0; i<n; i++){
    cin >> vect[i];
  }

  cout << solving(vect);
}
