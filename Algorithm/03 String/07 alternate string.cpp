#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>
using namespace std;

int solving(string s){

  int res=0;
  
  for(int i=1; i<s.length(); i++){
    if(s[i] == s[i-1]){
      res++;
    }
  }

  return res;
}

int main(){

  int t;
  string s;
  cin >> t;
  while(t--){
    cin >> s;
    cout << solving(s) << endl;
  }
}

