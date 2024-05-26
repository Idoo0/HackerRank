#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>
using namespace std;

string solving(int n, string s){

  string res="YES";
  map<char, int> maps;
  int j=1, isSort=1;
  for(int i=0; i<s.length(); i++){
    maps[s[i]]++;
    
    if(i < n-1){
    	if(s[i] != s[i+1]){
    		if(j<2){
    			isSort = 0;
    		}
    		j=0;
    	}
    	j++;
    }

  }

  for(auto& elem : maps){
    if(elem.first != '_' and elem.second == 1){
      return "NO";
    }
  }
  if((maps['_'] == 0) and (isSort == 0)){
    return "NO";
  }
  return res;
}

int main(){

  int t,n;
  string s;
  cin >> t;
  while(t--){
    cin >> n;
    cin >> s;
    cout << solving(n,s) << endl;  
  }
}

