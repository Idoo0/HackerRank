#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>
using namespace std;

string solving(vector<string> G, vector<string> P,int R,int C,int r,int c) {
  
  int pos=0, prevPos;
  
  for(int i=0; i<G.size()-P.size()+1; i++){
    prevPos = G[i].find(P[0]);
    while(prevPos != string::npos){
      for(int j=1; j<P.size(); j++){
       pos = G[i+j].find(P[j], prevPos);
       if(pos != prevPos or pos == P[j].npos){
         break;
       }
       if(j == (P.size() - 1)){
         return "YES";
       }
     }
     prevPos = G[i].find(P[0], prevPos+1);	
    }
  }
  return "NO";
}

int main(){

	int t;
	cin >> t;
	while(t--){
		int R,C,r,c;
		cin >> R >> C;
		vector<string> G(R);
		for(int i=0; i<R; i++){
			cin >> G[i];
		}
		cin >> r >> C;
		vector<string> P(r);
		for(int i=0; i<r; i++){
			cin >> P[i];
		}
		cout << solving(G, P, R,C,r,c) << endl;		
	}
}

