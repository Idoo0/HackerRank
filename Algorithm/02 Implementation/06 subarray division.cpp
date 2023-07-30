#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

int solving(vector<int> vect, int d, int m){

  int bottom=0,top=m,val,solution=0;

  while(true){
    val = 0;
    for(int i=bottom; i<top; i++){
      val += vect[i];
    }

    solution = (val == d)? solution + 1 : solution;

    if(top == vect.size()){
      break;
    }
    bottom++;
    top++;
  }
  return solution;
}

int main(){

  int n,d,m;
  cin >> n;
  vector<int> vect(n);
  for(int i=0; i<n; i++){
    cin >> vect[i];
  }
  cin >> d >> m;

  cout << solving(vect,d,m);
}
