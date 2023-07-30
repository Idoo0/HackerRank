#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

int solving(int x){

	return x+1;
}

int main(){

	int t,x;
	cin >> t;
	while(t--){
		cin >> x;
		cout << solving(x) << endl;
	}
}