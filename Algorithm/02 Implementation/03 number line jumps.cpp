#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

string solving(int x1, int v1, int x2, int v2){

    string solution;
    
    while(true){
      if(x1 == x2){
        solution = "YES";
        break;
      }else if(x1 > x2){
        solution = "NO";
        break;
      }

      x1 += v1;
      x2 += v2;
    }
    return solution;
}

int main(){

  int x1,v1, x2, v2;

  cin >> x1 >> v1 >> x2 >> v2;

  cout << solving(x1,v1, x2, v2);
}
