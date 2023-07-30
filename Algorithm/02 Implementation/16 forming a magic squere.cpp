#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>

#define INT_MAX 10e8
using namespace std;

bool isMagicSquered(vector<int> s){

  vector<vector<int>> s2(3, vector<int> (3));
  for(int i=0; i<3;i++){
    for(int j=0; j<3; j++){
      s2[i][j] = s[3 * i + j];
    }
  }

  bool condition = 1;
  for(int i=0; i<3; i++){
    if(s2[i][0] + s2[i][1] + s2[i][2] != 15){
      condition *= 0;
    }
  }

  for(int i=0; i<3; i++){
    if(s2[0][i] + s2[1][i] + s2[2][i] != 15){
      condition *= 0;
    }
  }

  if(s2[0][0] + s2[1][1] + s2[2][2] != 15) condition *= 0;
  if(s2[0][2] + s2[1][1] + s2[2][0] != 15) condition *= 0;


  return condition;

}

void findMagicSquere(vector<vector<int>>& AllMagicSquere){

  vector<int> magicSquere(9);

  for(int i=0; i<9; i++){
    magicSquere[i] = i + 1;
  }

  do{

    if(isMagicSquered(magicSquere)){
      AllMagicSquere.push_back(magicSquere);
    }

  }while(next_permutation(magicSquere.begin(), magicSquere.end()));

}

int cost(vector<int> a, vector<int> b){

  int res=0;

  for(int i=0; i<a.size(); i++){

    res += abs(a[i] - b[i]);
  }

  return res;
}

int solving(vector<int> s){

  int solution = INT_MAX;
  vector<vector<int>> AllMagicSquere;

  findMagicSquere(AllMagicSquere);

  for(int i=0; i<AllMagicSquere.size(); i++){
    solution = min(solution, cost(s, AllMagicSquere[i]));
  }

  return solution;

}
 
int main(){

  vector<int> vect(9);
  
  for(int i=0; i<9; i++){
    cin >> vect[i];
  }

  cout << solving(vect);

}
