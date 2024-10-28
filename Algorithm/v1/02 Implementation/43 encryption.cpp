#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

string solving(string s){

  string res;
  int c = ceil(sqrt(s.length()));
  for(int i=0; i<c; i++){
      for(int j=i; j<s.length(); j += c){
        res.push_back(s[j]);
      }
      res.push_back(' ');
  }
  return res; 
}

int main(){

  string s;
  cin >> s;
  cout << solving(s);
}