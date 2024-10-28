#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>
using namespace std;

bool isPalindrome(string s){
  for(int i=0, j=s.length()-1; i<s.length()/2; i++, j--){
    if(s[i] != s[j]){
      return false;
    }
  }
  return true;
}
int solving(string s){

  string s_temp;
  int res=0, notFound=0, i=0, j=s.length()-1;
  while(i<s.length()/2){
    if(s[i] != s[j]){
      // hapus pertama
      if(s[i+1] == s[j]){
        s_temp = s;
        s_temp.erase(i,1);
        if(isPalindrome(s_temp)){
          return i;
        }
      }else notFound++;
      // hapus ujung
      if(s[i] == s[j-1]){
        s_temp = s;
        s_temp.erase(j,1);
        if(isPalindrome(s_temp)){
          return j;
        }
      }else notFound++;
    }
    if(notFound == 2){
      return -1;
    }
    i++, j--;
  }

  return -1;
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

