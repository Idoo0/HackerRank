#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

long long solving(long long b, vector<long long> keyboard, vector<long long> drive){

  long long max = -1, value;
  for(int val_k : keyboard){

    for(int val_d : drive){

      value = val_k + val_d;
      if(value >= max and value <= b){
        max = value;
      }
    }
  }

  return max;
}

int main(){

  long long b, n, m;
  cin >> b >> n >> m;

  vector<long long> keyboard(n), drive(m);
  for(int i=0; i<n; i++){
    cin >> keyboard[i];
  }
  for(int i=0; i<m; i++){
    cin >> drive[i];
  }

  cout << solving(b,keyboard,drive);

}
