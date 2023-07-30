#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

int solving(int x, int y, int xk, int yk, int m, int n){

  int lenX = abs(x - xk), lenY = abs(y - yk);

  if((abs(m) > lenX and lenX != 0) or (abs(n) > lenY and lenY != 0)) return 0;
  if((m == 0 and m != lenX) or (n == 0 and n != lenY)) return 0;

  int modX = (m != 0)? lenX % m : 0;
  int modY = (n != 0)? lenY % n : 0;

  if (modX == 0 and modY == 0){
    int minX = (m != 0)? lenX/m : 0;
    int minY = (n != 0)? lenY/n : 0;
    if(minX % 2 == minY % 2){
      return 1;
    }else{
      return 0;
    } 
  }else{
    return 0;
  }
}

int main(){

  int x,y,xK,yK,m,n;
  string res;
  cin >> x >> y >> xK >> yK >> m >> n;
  res = solving(x,y,xK,yK,m,n)? "YES" : "NO";
  cout << res;
}