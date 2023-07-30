#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <numeric>
#include <map>
#include <unordered_map>

using namespace std;

int solving(int n, int m, int s){

	int solution = (m + s-1) % n ;	
	solution = (solution == 0)? n : solution;
	return solution;
}

int main(){

	int t,n,m,s;
	cin >> t;
	for(int i=0; i<t; i++){
		cin >> n >> m >> s;
		cout << solving(n,m,s) << endl;	
	}
	
}