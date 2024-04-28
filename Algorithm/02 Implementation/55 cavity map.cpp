#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>
using namespace std;

vector<string> solving(int n, vector<string> vect){

	vector<string> res = vect;
	int depth, top, bottom, left, right, e1, e2, e3, e4;
	for(int i=1; i<n-1; i++){
		for(int j=1; j<n-1; j++){
			depth = vect[i][j] - '0';
			top = vect[i-1][j] - '0';
			bottom = vect[i+1][j] - '0';
			left = vect[i][j-1] - '0';
			right = vect[i][j+1] - '0';
			if(depth > top and depth > bottom and depth > left and depth > right){
				res[i][j] = 'X';
			}			
		}
	}
	return res;
}

int main(){

	int n;
	cin >> n;
	vector<string> vect(n);
	for(int i=0; i<n; i++){
		cin >> vect[i];
	}
	vector<string> ans = solving(n, vect);
	cout << endl;
	for(string val : ans){
		cout << val << endl;
	}
}
