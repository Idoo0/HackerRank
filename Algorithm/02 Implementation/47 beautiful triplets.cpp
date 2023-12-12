#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>
using namespace std;

int solving(vector<int> vect, int d){

	int ans;
	sort(vect.begin(), vect.end());

	for(int i=0; i<vect.size(); i++){
		for(int j=i+1; j<vect.size(); j++){
			if(vect[j] - vect[i] == d){
				for(int k=j+1; k<vect.size(); k++){
					if(vect[k] - vect[j] == d){
						ans++;
						break;
					}
				}
				break;
			}
		}
	}
	return ans;
}

int main(){

	int n,d;
	cin >> n >> d;

	vector<int> vect(n);
	for(int i=0; i<n; i++){
		cin >> vect[i];
	}
	cout << solving(vect,d);
}