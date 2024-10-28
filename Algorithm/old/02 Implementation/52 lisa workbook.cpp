#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>
using namespace std;

int solving(int n, int k, vector<int> arr) {
  int res=0,pages=1,capt=0; 
  for(int i=0; i<n; i++){
    int problem = arr[i];
    for(int j=1; j<=problem; j++){
      if (pages == j){
        res++;
      }
      capt++;
      if(capt == k){
        pages++;
        capt = 0;
      }
    }
    if (problem%k != 0) pages++;
    capt = 0;
  }
  return res;
}

int main(){

	int n,k;
	cin >> n >> k;
	vector<int> vect(n);
	
	for(int i=0; i<n; i++){
		cin >> vect[i];
	}

	cout << solving(n,k,vect);
}

