#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

long long solving(int b,int w,int bc,int wc,int z){

	long long res=0,bc_temp, wc_temp;

	bc_temp = (bc > (wc + z))? (wc + z) : bc;
	wc_temp = (wc > (bc + z))? (bc + z) : wc;

	res = (bc_temp * b) + (wc_temp * w);

	return res;
}

int main(){

	int t,b,w,bc,wc,z;
	cin >> t;
	while(t--){
		cin >> b >> w >> bc >> wc >> z;
		cout << "jawaban: " << solving(b,w,bc,wc,z) << endl;
	}
}