#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

int solving(vector<int> vect){

  auto max_val = max_element(vect.begin(), vect.end());

  int count_max = count(vect.begin(), vect.end(), *max_val);
  
  return count_max;  
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
