#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

int solving(int n, int m){

  int i_front, i_back, point, length = floor(n/2);
  
  point = 0;
  for(int i=0; i<=length; i++, point += 2){
    if(m == point or m == point + 1){
      i_front = i;
      break;
    }
  }
  
  point = (n % 2 == 0)? n+1:n ;
  for(int i=0; i<=length; i++, point -= 2){
    if(m == point or m == point - 1){ 
        i_back = i;
        break;
      }
  }

  return (i_front < i_back)? i_front : i_back;

}

int main(){

  int n, m;
  cin >> n >> m;
  cout << solving(n,m);    
}
