#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

void solving(vector<int> vect){

  vector<int> solution(vect.size());

  for(int i=0; i<vect.size(); i++){

    if(vect[i] < 38){
      solution[i] = vect[i];
    }else{
      if(vect[i] % 5 < 3){
        solution[i] =  vect[i];
      }else{
        solution[i] = vect[i] + 5 - vect[i] % 5;
      }
    }
  }

  for(int val:solution){
    cout << val << endl;
  }
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
