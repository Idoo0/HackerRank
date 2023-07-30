#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

int solving(int n, int m){

	int res;
	n++; m++;
	res = (n/2) * (m/2);

	return res;

}

int main(){

	int n,m;
	cin >> n >> m;
	cout << solving(n,m);
}