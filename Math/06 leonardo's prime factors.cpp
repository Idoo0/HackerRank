
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

int solving(long n) {
    
    if (n == 1) return 0;
    
    vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    unsigned long long m = 1;
    int cnt = 0;
    for (int prime : primes){
        m *= (unsigned long long)prime;
        
        if (m > n) break;
        if (m == n){
            cnt++;
            break;
        }
        cnt++;
    }
    return cnt;
}

int main(){

  long t,n;
  cin >> t;
  while(t--){
    cin >> n;
    cout << solving(n) << endl;
  }
}