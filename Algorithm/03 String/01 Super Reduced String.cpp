#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>
using namespace std;

string solving(string a){

  int i=0;
  while(true){
    if(i == a.length() - 1 or a.length() == 0){
      break;
    }
    if(a[i] == a[i+1]){
      a.erase(i, 2);
      i = (i > 0)? i - 1 : 0;
    }else{
      i++;
    }
  }
  // cout << a.length();
  return (a.length() != 0)? a : "Empty String";
}

int main(){

  string a;
  cin >> a;
  cout << solving(a);
  // cout << a.erase(0,2);
}

