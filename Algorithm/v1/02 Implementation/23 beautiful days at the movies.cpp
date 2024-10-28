#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

int reverseInt(int val){
	int rev_val = 0, temp;

	while(val != 0){
		temp = val % 10;
		rev_val = rev_val * 10 + temp;
		val /= 10;
	}
	return rev_val;
}

int solving(int m, int n, int k){
	int solution = 0;

	for(int val=m; val<n+1; val++){
		if((abs(val - reverseInt(val))) % k == 0) solution++;
	}

	return solution;
}

int main(){

	int m,n,k;
	cin >> m >> n >> k;

	cout << solving(m,n,k);
}