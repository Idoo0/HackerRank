#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

string solving(string s, string t, int k){
  
  int pos, val_app, val_del, min, max;
  for(int i=0; i<s.size() and i<t.size(); i++){
    if(s[i] == t[i]){
      pos=i+1;
    }else{
      break;
    }
  }
  
  val_del = s.size() - pos;
  val_app = t.size() - pos;

  min = val_del + val_app;
  max = min + (2 * pos);

  if(k >= min and k <= max){
    return ((k - min) % 2 == 0)? "Yes" : "No"; 
  }else{
    return (k > max)? "Yes" : "No";
  }
  
}

int main(){

  string s,t;
  int k;
  cin >> s >> t >> k;
  cout << solving(s,t,k);
}
