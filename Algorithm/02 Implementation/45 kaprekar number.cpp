#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>

typedef long long ll;
using namespace std;

void solving(ll p, ll q){

	bool isFind = 0;
	ll x,y,z,digit; 

	for(;p<=q;p++){
		
		z = p * p;
		string temp = to_string(z); digit = temp.length();
		if(!(p - (pow(10, digit)))) continue;
		x = z / (pow(10, ceil(digit/2.0)));
		y = z - (x * (pow(10, ceil(digit/2.0))));

		//cout << "p = " << p << "---" << x << " " << y << endl;
		if (x + y == p){
			cout << p << " ";
			isFind = 1;
		}
	}

	if(!isFind) cout << "INVALID RANGE";
}

int main(){

	ll p,q;
	cin >> p >> q;

	solving(p,q);
}