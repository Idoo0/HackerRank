#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

int solving(int n){

	int cumulative;
	int shared = 5, liked;
	for(int i=0; i<n; i++){
		liked = floor(shared/2);
		cumulative += liked;
		shared = liked * 3;
	}

	return cumulative;
}

int main(){

	int n;
	cin >> n;
	cout << solving(n);
}