#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

void solving(int px,int py,int qx,int qy){
	
	int rx,ry;
	rx = 2*qx - px;
	ry = 2*qy - py;
	cout << rx << " " << ry;
}

int main(){

	int t,px,py,qx,qy;
	cin >> t;
	while(t--){
		cin >> px >> py >> qx >> qy;
		solving(px,py,qx,qy);
		cout << endl;
	}
}