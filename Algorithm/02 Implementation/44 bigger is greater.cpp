#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

string solving(string w){

	if(next_permutation(w.begin(), w.end())) return w;
	else return "no answer";
}

int main(){

	int t;
	cin >> t;
	while(t--){
		string w;
		cout << solving(w);
	}
}