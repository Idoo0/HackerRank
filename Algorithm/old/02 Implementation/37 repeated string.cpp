#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

long long  solving(string s, long long n){

	long long strLen, leftA, fullA;

	strLen = s.size();
	leftA = count(s.begin(), s.end() - (strLen - (n%strLen)), 'a');
	fullA = (n/strLen) * (count(s.begin(), s.end(), 'a'));	
	 
	return leftA + fullA;
}

int main(){

	string s;
	long long n;
	cin >> s >> n;
	cout << solving(s,n);
}