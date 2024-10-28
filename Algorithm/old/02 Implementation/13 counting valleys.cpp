#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

int solving(int n, string steps){

  int position=0, solution=0;
  bool isOnValley;
  
  for(int i=0; i<n; i++){
    
    isOnValley = (position < 0)? true : false;
    
    if(steps[i] == 'U'){
      position++;
    }else if(steps[i] == 'D'){
      position--;
    }
    
    if(position == 0 and isOnValley){
      solution++;
    }
    
  }

  return solution;
  
}

int main(){

  int n;
  string steps;

  cin >> n >> steps;

  cout << solving(n, steps);
}
