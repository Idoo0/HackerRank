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

	int h=1;

	for(int i=0; i<n; i++){
		if(i%2){
			h++;
		}else{
			h *= 2;
		}
	}

	return h;
}

int main(){

	int t,n;
	cin >> t;
	for(int i=0; i<t; i++){
		cin >> n;
		cout << solving(n);
	}
}