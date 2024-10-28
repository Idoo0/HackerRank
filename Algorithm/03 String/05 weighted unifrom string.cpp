#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>
using namespace std;

vector<string> solving(string s, vector<int> vect){

  vector<string> res;
  vector<int> u;
  int beforeAlpha = 96, num = 1;
  for(int i=0; i<s.length(); i++){
    int alpha = int(s[i]);
    if(alpha == beforeAlpha){
      num++;
    }else{
      beforeAlpha = alpha;
      num = 1;
    }
    u.push_back((alpha - 96) * num);
  }
  bool found;
  for(int val : vect){
    found = false;
    for(int uVal : u){
      if(val == uVal){
        found = true;
        break;
      }
    }
    (found)? res.push_back("Yes") : res.push_back("No");
  }
  return res;
}

int main(){

  string s;
  int n;
  cin >> s >> n;
  vector<int> vect(n);
  for(int i=0; i<n; i++){
    cin >> vect[i];
  }
 vector<string> res = solving(s, vect);
 for (string val : res){
  cout << val << endl;
 }
}

