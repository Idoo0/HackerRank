#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

int solving(int a, int b){

  int i = ceil(sqrt(a)), j = floor(sqrt(b)), res=0;
  res = j - i + 1;
  return res;
}

int main(){

  int t,a,b;
  cin >> t;
  while(t--){
    cin >> a >> b;
    cout << solving(a,b) << endl;
  }
}
