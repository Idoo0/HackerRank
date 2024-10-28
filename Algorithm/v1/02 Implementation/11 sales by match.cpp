#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <map>
#include <unordered_map>

using namespace std;

int solving(vector<int> vect){

  sort(vect.begin(), vect.end());
  int amount, solution=0;
  int point=0;
  for(int val : vect){
    amount = 0;
    if(val != point){
      point = val;
      amount = count(vect.begin(), vect.end(), point);
      solution += floor(amount/2);
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
