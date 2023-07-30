#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

string solving(int n,vector<vector<int>> vect){

	vector<int> len(n,0);
	vector<int> colour(n,0);
	bool isPossible;
	for(int i=0; i<vect.size(); i++){
		for(int j=0; j<vect[i].size(); j++){
			colour[j] += vect[i][j];
			len[i] += vect[i][j];
		}
	}
	
	for(int i=0; i<colour.size(); i++){
		isPossible = true;
		for(int j=0; j<len.size(); j++){
			if(colour[i] != len[j]){
				isPossible = false;
			}else{
				isPossible = true;
				len.erase(len.begin() + j);
				break;
			}
		}
		if(!isPossible){
			return "Impossible";
		}
	}

	return "Possible";
}

int main(){

	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		vector<vector<int>> vect(n,vector<int>(n));
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cin >> vect[i][j];
			}
		}
		cout << solving(n, vect) << endl;
	}
	
}