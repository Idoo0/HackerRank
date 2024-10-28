#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

void solving(vector<int> vect){

  int min_val = 10e8, max_val=0, break_min=0, break_max=0;


  for(int i=0; i<vect.size(); i++){

    if(i==0){
      min_val = vect[i];
      max_val = vect[i];
    }else{
      if(vect[i] < min_val){
        min_val = vect[i];
        break_min++;
      }
      if(vect[i] > max_val){
        max_val = vect[i];
        break_max++;
      }
    }
  }

  cout << break_max << " " << break_min << endl;
}

int main(){

  int n;
  cin >> n;
  vector<int> vect(n);
  for(int i=0; i<n; i++){
    cin >> vect[i];
  }
  solving(vect);
}
