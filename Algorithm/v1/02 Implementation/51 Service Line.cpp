#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>
using namespace std;

void solving(vector<int> width, vector<vector<int>>cases, int n, int t){

	// for(int val : width){
	// 	cout << val << " ";
	// }
	// cout << endl << endl;
	// for(auto vect : cases){
	// 	for(int val : vect){
	// 		cout << val << " ";
	// 	}
	// 	cout << endl;
	// }
	int res = 9999999;
	for(int i=0; i<t; i++){
		for(int j=cases[i][0]; j<=cases[i][1]; j++){
			if (width[j] < res){
				res = width[j];
			}
		}
		cout << res << endl;
		res = 9999999;
	}
}

int main(){

	int n,t;
	cin >> n >> t;
	vector<int> width(n);
	for (int i=0; i<n; i++){
		cin >> width[i];
	}
	vector<vector<int>> cases(t, vector<int> (2));
	for(int i=0; i<t; i++){
		for(int j=0; j<2; j++){
			cin >> cases[i][j];
		}
	}
	solving(width, cases, n ,t);
}