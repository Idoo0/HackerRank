#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

void solving(vector<long long> vect){

	sort(vect.begin(), vect.end());
	long long min = 0, max = 0;
	for(int i=0; i<5; i++){
		if(i != 4){
			min += vect[i];
		}
		if(i != 0){
			max += vect[i];
		}
	}

	cout << min << " " << max;
}

int main(){

	vector<long long> vect(5);
	for(int i=0; i<5; i++){
		cin >> vect[i];
	}
	solving(vect);
}
