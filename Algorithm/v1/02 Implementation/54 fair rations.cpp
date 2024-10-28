#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>
using namespace std;

string solving(int n, vector<int> b){

	int res=0;

	for(int i=0; i<n-1; i++){
		if(b[i] % 2){
			b[i]++;
			b[i+1]++;
			res += 2;
		}
	}

	return (b[n-1]%2 != 0) ? "NO" : to_string(res);
}

int main(){

	int n;
	cin >> n;
	vector<int> b(n);
	for(int i=0; i<n; i++){
		cin >> b[i];
	}

	cout << solving(n,b);
}

