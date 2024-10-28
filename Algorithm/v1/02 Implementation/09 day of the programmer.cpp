#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <map>
#include <unordered_map>

using namespace std;

void solving(int year){

  int day;
  if(year > 1918){
    day = (((year % 4 == 0) and (year % 100 != 0)) or (year % 400 == 0)) ? 12 : 13;
  }else if(year < 1918){
    day = (((year % 4 == 0))) ? 12 : 13;
  }else{
    day = 26;
  }
  
  cout << day << ".09." << year; 
}

int main(){

  int year;
  cin >> year;
  solving(year);    
}
