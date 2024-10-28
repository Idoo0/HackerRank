#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

int solving(vector<int> h, string word){

	// a = 97, z = 122;	
	int solution, tallest=0;
	for(int i=0; i<word.size(); i++){
		
		int pos = int(word[i]) - 97;
		tallest = (h[pos] > tallest)? h[pos] : tallest;
	}

	solution = tallest * word.size();
	return solution;
}

int main(){

	vector<int> h(26);
	string word;

	for(int i=0; i<h.size(); i++){
		cin >> h[i];
	}
	cin >> word;
	
	cout << solving(h, word);
}