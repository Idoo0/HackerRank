#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

int solving(vector<int> vect, int m){

	int solution;

	int max_val = *max_element(vect.begin(), vect.end());
	solution = (m > max_val)? m : 0 - max_val;

	return abs(solution);
}

int main(){

	int n,m;
	cin >> n >> m;
	vector<int> vect(n);
	for(int i=0; i<n; i++){
		cin >> vect[i];
	}
	cout << solving(vect, m);
}