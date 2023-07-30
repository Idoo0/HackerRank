#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

int main(){

	int n,k,temp=0, res=0;
	bool isMax, isBreak=false;
	cin >> n >> k;
	vector<int> vect(n);
	for(int i=0; i<n; i++){
		cin >> vect[i];
	}
	vector<int> isAlive(vect.size()); fill(isAlive.begin(), isAlive.end(), 1);

	while(count(isAlive.begin(), isAlive.end(), 1) != 2){
		do{
			isMax = true;
			for(int i=0; i<vect.size(); i++){
				for(int j=i+1; j<vect.size(); j++){
					if(isAlive[i] == 0 or isAlive[j] == 0){
						continue;
					}
					if((vect[i] + vect[j]) % k == 0){
						isMax = false;
						isBreak = true;
						break;
					}	
				}
				if(isBreak){
					break;
				}
			}
			isBreak = false;
			if(isMax){
				res = count(isAlive.begin(), isAlive.end(),1);
				cout << res;
				isBreak = true;
				break;
			}
		}while(next_permutation(isAlive.begin(), isAlive.end()));
		isAlive[temp] = 0; temp++;
		if(isBreak){
			break;
		}	
	}
	
	if(!isMax){
		cout <<  2;
	}
}