#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

string solving(vector<int> vect, int m){

	string solution;

	int nPos = count_if(vect.begin(), vect.end(), [](int a){return a <= 0;});

	cout << nPos;

	solution = (nPos < m)? "YES" : "NO"; 
	return solution;
}

int main(){

	int t,n,m;
	cin >> t;
	vector<int> vect;
	for(int i=0; i<t; i++){
		cin >> n >> m;
		vect.resize(n);
		for(int i=0; i<n; i++){
			cin >> vect[i];
		}
		cout << solving(vect,m);
		vect.clear();
	}
}