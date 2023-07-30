#include <bits/stdc++.h>

using namespace std;

string solving(string s) {

  int n = s.length();

  // swap zero
  for(int i=n-1; i>=0; i--){
    if(s[i] == '0'){
      swap(s[i], s.front());
      s.erase(0,1);
    }
  }

  // core
  for(int i=0;  i<n; i++){
    if(isupper(s[i]) and islower(s[i+1]) and s[i+2] == '*'){
      swap(s[i], s[i+1]);
      s.erase(i+2, 1);
    }
  }

  return s;
}

int main(){

  string s;
  cin >> s;
  solving(s);
}