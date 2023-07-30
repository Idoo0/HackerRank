#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

int solving(int a, int l){

	return ceil(2*l / float(a));

}

int main(){

	int a, l;
	cin >> a >> l;
	cout << solving(a,l);
}