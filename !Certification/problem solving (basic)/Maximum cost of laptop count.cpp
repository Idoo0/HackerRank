#include <bits/stdc++.h>

using namespace std;

int solving(vector<int> cost, vector<string> labels, int dailyCount) {
  
  int n = cost.size();
  int total_cost=0, dc=0, max_cost=0;
  
  for(int i=0; i<n; i++){
    total_cost += cost[i];
    if(labels[i] == "legal") dc++;
    if(dc == dailyCount){
      dc = 0;
      max_cost = max(max_cost, total_cost);
      total_cost = 0;
    }
  }
  
  return max_cost;
}

int main(){

    int n,m,dailyCount;
    cin >> n;
    vector<int> cost(n);
    for(int i=0; i<n; i++){
        cin >> cost[i];
    }
    cin >> m;
    vector<string> labels(m);
    for(int i=0; i<m; i++){
        cin >> labels[i];
    }
    cin >> dailyCount;

    cout << solving(cost, labels, dailyCount);
}
