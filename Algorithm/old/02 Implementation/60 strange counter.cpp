#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>
using namespace std;

long solving(long t){

  long res=0;
  int time = 1;
  int value = 3, value_flag = 3;
  while(time <= t){
      if(value == 1){
          value = value_flag * 2;
          value_flag *= 2;
      }
      time++;
      value--;
  }
  return value;
  return res;
}

int main(){

  long t;
  cin >> t;
  cout << solving(t);
}

