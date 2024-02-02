#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;


int solution(int m, int n, int x_q, int y_q, vector<vector<int>> halangan){

  swap(x_q,y_q); // diswap karena x dan y di hackerrank ditukar
  int x,y,d1,d2,x_obs,y_obs; // jumlah titik ditiap sumbu
  vector<vector<int>> batas(4,vector<int> (2,0));
  int max_d1 = (y_q - x_q >= 0)? (m - (y_q - x_q) + 1) : m+1,
      min_d1 = (y_q - x_q >= 0)? 0 : (1 - (y_q - x_q) - 1),
      max_d2 = (y_q + x_q >= m+1)? m + 1 : ((y_q + x_q)),
       min_d2 = (y_q + x_q >= m+1)? ((y_q + x_q) - m - 1) : 0;
  for(int i=0; i<4; i++){
    if(i==2){
      batas[i][0] = min_d1;
      batas[i][1] = max_d1;
    }else if(i == 3){
      batas[i][0] = min_d2;
      batas[i][1] = max_d2;
    }else{
      batas[i][0] = 0; // min
      batas[i][1] = m+1; // max  
    }
    
  }

  // sumbu x
  x = m-1;
  // sumbu y
  y = m-1;
  // sumbu d1 (/);
  if((y_q - x_q) >= 0){
    d1 = (m - y_q) + (x_q - 1);
  }else{
    d1 = (m - x_q) + (y_q - 1);
  }
  // sumbu d2 (\);
  if((x_q + y_q) >= m + 1){
    d2 = (m - y_q) + (m - x_q);
  }else{
    d2 = (y_q - 1) + (x_q - 1);
  }

  for(int i=0; i<n; i++){
    x_obs = halangan[i][1];
    y_obs = halangan[i][0];

    if(y_obs == y_q){
      if(x_obs < x_q){
        batas[0][0] = (x_obs > batas[0][0])? x_obs : batas[0][0];
      }else{
        batas[0][1] = (x_obs < batas[0][1])? x_obs : batas[0][1];
      }
    }

    if(x_obs == x_q){
      if(y_obs < y_q){
        batas[1][0] = (y_obs > batas[1][0])? y_obs : batas[1][0];
      }else{
        batas[1][1] = (y_obs < batas[1][1])? y_obs : batas[1][1];
      }  
    }

    // sumbu d1 (/)
    if((y_obs - x_obs) == (y_q - x_q)){ 
      if(x_obs < x_q){
        batas[2][0] = (x_obs > batas[2][0])? x_obs : batas[2][0];
      }else{
        batas[2][1] = (x_obs < batas[2][1])? x_obs : batas[2][1];
      }
    }

    // sumbu d2 (\)
    if((y_obs + x_obs) == (y_q + x_q)){ 
      if(x_obs < x_q){
        batas[3][0] = (x_obs > batas[3][0])? x_obs : batas[3][0];
      }else{
        batas[3][1] = (x_obs < batas[3][1])? x_obs : batas[3][1];
      }
    }
  }

  x -= batas[0][0] + (m+1 - batas[0][1]);
  y -= batas[1][0] + (m+1 - batas[1][1]);
  d1 -= (batas[2][0] - min_d1) + (max_d1 - batas[2][1]);
  d2 -= (batas[3][0] - min_d2) + (max_d2 - batas[3][1]);

  return x + y + d1 + d2; 
}

int main(){

  int m,n,r_q,c_q;

  cin >> m >> n >> r_q >> c_q;

  vector<vector<int>> halangan(n, vector<int> (2));

  for(int i=0; i<n; i++){
    cin >> halangan[i][0] >> halangan[i][1];
  }

  cout << solution(m,n,r_q,c_q,halangan);
}
