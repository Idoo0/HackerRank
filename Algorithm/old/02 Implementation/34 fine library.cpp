#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

int solving(int d1, int m1, int y1, int d2, int m2, int y2){

  if(y1 != y2){
    return (y1 > y2)? 10000 : 0;
  }else if(m1 != m2){
    return (m1 > m2)? (500 * (m1  - m2)) : 0;
  }else{
    return (d1 > d2)? (15 * (d1 - d2)) : 0;
  }
}

int main(){

  int d1,m1,y1,d2,m2,y2;

  cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;
  cout << solving(d1,m1,y1,d2,m2,y2);
}
