#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

void solving(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    
  int p=0,q=0;
  for (int i=0; i<apples.size(); i++){
      apples[i] = apples[i] + a;
      if(apples[i] >= s and apples[i] <= t){
          p++;
      }
  }
  for (int i=0; i<oranges.size(); i++){
      oranges[i] = oranges[i] + b;
      if(oranges[i] >= s and oranges[i] <= t){
          q++;
      }
  }
  cout << p << "\n" << q;
}

int main(){

	int s,t,a,b,m,n;

	cin >> s >> t >> a >> b >> m >> n;

	vector<int> apples(m), oranges(n);

	for(int i=0; i<m; i++){
		cin >> apples[i];
	}
	for(int i=0; i<n; i++){
		cin >> oranges[i];
	}
	
	solving(s,t,a,b,apples,oranges);
}