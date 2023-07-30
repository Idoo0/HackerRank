#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

void solving(vector<int> vect){

	vector<int> solution;
	map<int, int> map_seq;
	int dump=1;
	for(int val : vect){
		map_seq[val] = dump; dump++;
	}

	for(auto val : map_seq){
		dump = val.second;
		solution.push_back(map_seq.at(dump));
	}

	for(int val : solution){
		cout << val << endl;
	}
}

int main(){

	int n;
	cin >> n;
	vector<int> vect(n);
	for(int i=0; i<n; i++){
		cin >> vect[i];
	}
	solving(vect);
}