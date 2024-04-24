#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>
using namespace std;

int solving(int n, int m, vector<int> c){

	int max=-1, nearest, dis; 
	
    for(int i = 0; i < n; i++){
    	nearest=100001;
    	for (int j = 0; j < m; j++){
    		dis = abs(i - c[j]);
    		if (dis < nearest){
    			nearest = dis;
    		}
    	}
    	if (nearest > max){
    		max = nearest;
    	}
    }

	return max;
}

int main(){

    int n, m;
	cin >> n >> m;
	
	vector<int> c(m);
	for (int i = 0; i < m; i++){
		cin >> c[i];
	}

	cout << solving(n, m, c); 
}
