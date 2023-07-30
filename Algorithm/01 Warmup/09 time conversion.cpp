#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

string solving(string time){

  //hh:mm:ssam
  string zone = time.substr(8,2);
  int hour = stoi(time.substr(0,2));
  if(zone == "AM"){
    if(hour == 12) time.replace(0,2,"00");
  }else{
    if(hour != 12){
      hour += 12;
      time.replace(0,2,to_string(hour));
    }
  }
  time.erase(8,2);
  return time;
}

int main(){

  string time;
  cin >> time;
  cout << solving(time);
}
