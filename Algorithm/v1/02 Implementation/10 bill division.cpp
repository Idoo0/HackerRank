#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <map>
#include <unordered_map>

using namespace std;

void solving(vector<int> vect, int k, int l){

  vect.erase(vect.begin() + k);

  int solution = 0;
  for(int val : vect){
    solution += val;
  }
  solution /= 2; 
  if(solution == l){
    cout << "Bon Appetit";
  }else{
    cout << l - solution;
  }
}

int main(){

  int n,k,l;
  cin >> n >> k;
  vector<int> vect(n);
  for(int i=0; i<n; i++){
    cin >> vect[i];
  }
  cin >> l;

  solving(vect,k,l);
}
