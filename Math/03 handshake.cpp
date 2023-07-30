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

	if(x == 0 or x == 1){
		return 0;
	}else{
		return ((x*(x-1)) / 2);
	}
}

int main(){

	int t,x;
	cin >> t;
	while(t--){
		cin >> x;
		cout << solving(x) << endl;
	}
}