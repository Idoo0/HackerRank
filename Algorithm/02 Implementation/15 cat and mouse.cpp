#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

string solving(int x, int y, int z){

  string solution;
  if(abs(x-z) > abs(y-z)){
    solution = "Cat B";
  }else if(abs(x-z) < abs(y-z)){
    solution = "Cat A";
  }else{
    solution = "Mouse C";
  }
  return solution;
  
}

int main(){

  int n,x,y,z;
  cin >> n;

  while(n--){
    cin >> x >> y >> z;
    cout << solving(x,y,z) << endl;  
  }
}
