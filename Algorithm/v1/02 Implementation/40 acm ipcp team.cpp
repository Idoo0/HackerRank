#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

int knownTopic(string topic1, string topic2){

	int res=0,a,b;
	for(int i=0; i<topic1.size(); i++){
		a = topic1[i] - '0'; b = topic2[i] - '0';
		if(a + b) res++;
	}
	return res;
}
void solving(vector<string> topics){

	int max=0, res=0, kt;

	for(int i=0; i < topics.size(); i++){
		for(int j=i+1; j < topics.size(); j++){
			kt = knownTopic(topics[i], topics[j]);
			if(kt > max){
				max = kt;
				res=1;
			}else if(max == kt){
				res++;
			}
		}
	}
	cout << max << "\n" << res;
}

int main(){

	int n,m;
	cin >> n >> m;
	vector<string>topics(n);
	for(int i=0; i<n; i++){
		cin >> topics[i];
	}
	solving(topics);
}