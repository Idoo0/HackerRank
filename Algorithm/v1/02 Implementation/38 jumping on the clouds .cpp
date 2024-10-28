#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

int solving(vector<int> isThunder){

  int res=-1, pos=0;

  while(pos < isThunder.size()){
    if(isThunder[pos + 2]){
      pos++; 
      res++;
    }else{
      pos += 2; 
      res++;
    }
  }
  return res;
}

int main(){

  int n;
  cin >> n;
  vector<int> vect(n);
  for(int i=0; i<n; i++){
    cin >> vect[i];
  }
  cout << solving(vect);
}