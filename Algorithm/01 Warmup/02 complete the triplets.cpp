#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

void solving(vector<int> vect_a, vector<int> vect_b){
  
  int point_a = 0, point_b = 0;
  for(int i=0; i<3; i++){
    if(vect_a[i] > vect_b[i]){
      point_a++;
    }else if(vect_a[i] < vect_b[i]){
      point_b++;
    }
  }

  cout << point_a << " " << point_b;
}

int main(){

  vector<int> vect_a(3), vect_b(3);

  for(int i=0; i<3; i++){
    cin >> vect_a[i];
  }
  for(int i=0; i<3; i++){
    cin >> vect_b[i];
  }

  solving(vect_a, vect_b);
}
