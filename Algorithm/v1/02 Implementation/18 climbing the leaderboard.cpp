#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

void solving(vector<int> rank, vector<int> player){

  int pos, min = -1;
  map<int, int> map_rank;
  for(int i=0,j=0; i<rank.size(); i++){
    if(rank[i] != min){
      map_rank[++j]=rank[i];
      min = rank[i]; 
    }
  }
  
  int max_rank = map_rank.begin()->second;
  auto start = map_rank.rbegin();
  for(int val_player : player){

    for(auto i=start ; i != map_rank.rend(); i++){

      if(val_player <= i->second){
        pos = (val_player < i->second)? i->first + 1 : i->first;
        cout << pos << endl;
        start = i;
        break;
      }else if(val_player > max_rank){
      	cout << 1 << endl;
      	start = i;
      	break;
      }
    }
  }
}

int main(){

  int n,m;
  cin >> n;
  vector<int> rank(n);
  for(int i=0; i<n; i++){
    cin >> rank[i];
  }
  cin >> m;
  vector<int> player(m);
  for(int i=0; i<m; i++){
    cin >> player[i];
  }
  solving(rank, player);
}