#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

void solving(int n){

  for(int i=1; i<=n; i++){
    for(int j=n; j>i; j--){
      cout << " ";
    }
    for(int j=0; j<i; j++){
      cout << "#";
    }
    cout << endl;
  }
}

int main(){

  int n;
  cin >> n;

  solving(n);
}
