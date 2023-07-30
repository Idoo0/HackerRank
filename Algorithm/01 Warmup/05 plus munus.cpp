#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

void solving(vector<int> vect){

  float plus = 0, minus = 0, zero = 0;
  for(int val : vect){
    if(val > 0){
      plus++;
    }else if(val < 0){
      minus++;
    }else{
      zero++;
    }
  }
  float n = vect.size();
  cout << setprecision(6)
       << plus/n << "\n"
       << minus/n << "\n"
       << zero/n;
}

int main(){

  int n;
  cin >> n;
  vector <int> vect(n);
  for(int i=0; i<n; i++){
    cin >> vect[i];
  }

  solving(vect);
}
