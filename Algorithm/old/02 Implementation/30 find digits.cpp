#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

int solving(int d){

	int digits, d_temp=d, solution=0;

	while(d_temp >= 1){
		//cout << "hai" << endl;
		digits = d_temp % 10;
		d_temp /= 10;
		//cout << digits << endl;
		if(digits == 0){
			continue;
		}else if(d % digits == 0){
			solution++;
		}
	}


	return solution;
}

int main(){

	int t,d;
	cin >> t;
	for(int i=0; i<t; i++){
		cin >> d;
		cout << solving(d) << endl;
	}
}