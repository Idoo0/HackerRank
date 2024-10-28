#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

int solving(vector<int> a, vector<int> b){

  vector<int> solution;
  bool condition = true;
  for(int i=1; i<=100; i++){
    condition = true;
    
    // kondisi 1
    for(int val : a){
      if(i%val != 0){
        condition = false;
        break;
      }
    }
    
    if(condition == false){
      continue;
    }
    
    // kondisi 2
    for(int val : b){
      if(val%i != 0){
        condition = false;
        break;
      }
    }
    
    if(condition == true){
      solution.push_back(i);
    }
  }
  
  return solution.size();
}

int main(){

  int m,n;
  cin >> m >> n;
  vector<int> a(m); 
  vector<int> b(n);
  for(int i=0; i<m; i++){
    cin >> a[i];
  }
  for(int i=0; i<n; i++){
    cin >> b[i];
  }
  cout << solving(a,b);
}
