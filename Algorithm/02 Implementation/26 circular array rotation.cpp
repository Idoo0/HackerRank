#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

void solving(int k, vector<int> vect, vector<int> query){
	
	int last;
	for(int i=0; i<k; i++){
		last = vect.back();
		vect.erase(vect.end() - 1);
		vect.insert(vect.begin(), last);		
	}

	for(int val : query){
		cout << vect[val] << endl;
	}	
	
}

int main(){

	int n,k,q;
	cin >> n >> k >> q;
	vector<int> vect(n), query(q);

	for(int i=0; i<n; i++){
		cin >> vect[i];
	}
	for(int i=0; i<q; i++){
		cin >> query[i];
	}

	solving(k, vect, query);
}