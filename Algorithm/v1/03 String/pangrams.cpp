#include<bits/stdc++.h>
using namespace std;

string solving(string s){
  bool isParam[26];
  fill(isParam, isParam+52, false);
  for(int i=0; i<s.length(); i++){
    // cout << "karakter ke-" << i << " --- " << int(s[i]) << endl;
    if(s[i] == ' '){
      continue;
    }
    char c = s[i];
    int a = int(c);
    if((a >= 65 and a <= 90) or (a >= 97 and a <= 122)){
      if(a >= 97) a -= 32;
      a -= 65;
      if(!isParam[a]){
        isParam[a] = true;
      }
    }
  }
  for(int i=0; i<26; i++){
    // cout << "huruf -- " << char(i+65);
    if(!isParam[i]){
      return "not pangram";
      // cout << " --tidak ada";
    }
    // cout << endl;
  }
  return "pangram";
}
int main(){
  string s;
  getline(cin, s);
  cout << solving(s);
}