#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>
#include <cstring>

using namespace std;

class BigInt{
private:
	string digits;
public:

	BigInt(string n){
		digits = n;
	}
	string getDigit(){
		return digits;
	}
	char getDigitAt(int i){
		return digits[i];
	}
	int getLength(){
		return digits.size();
	}

	bool lessThan(BigInt b){
    int n = getLength(), m = b.getLength();
    if(n != m)
        return n < m; 
    for(int i=0; i<n; i++){
    	if(getDigitAt(i) < b.getDigitAt(i)){
    		return true;
    	}
    }
    return false;
	}

	void plus(BigInt val){
		string final; 
		int temp=0, val1, val2, addedVal=0;
		auto it_i = digits.rbegin(), it_iEnd = digits.rend(),
				 it_j = val.digits.rbegin(), it_jEnd = val.digits.rend();

		for(;it_i < it_iEnd or it_j < it_jEnd or temp; it_i++,it_j++){

				addedVal = temp;
				if(it_i >= it_iEnd){
					val1 = 0;
				}else{
					val1 = *it_i - '0';
				}
				if(it_j >= it_jEnd){
					val2 = 0;
				}else{
					val2 = *it_j - '0';
				}
				addedVal += val1 + val2;
				if(addedVal > 9){
					temp = 1;
					addedVal %= 10;
				}else{
					temp = 0;
				}
				final.insert(0,to_string(addedVal));
		}
		digits = final;
	}

	void minus

	void multiplication(BigInt val){
		string final;
		BigInt val1("1");
		BigInt one("1");
		BigInt val_cons = digits;
		while(val1.lessThan(val)){
			val1.plus(one);
			plus(val_cons);
		}
	}
};

void solving(int n){

	BigInt one("1");
	BigInt temp("1");
	BigInt final("1");

	for(int i=0; i<n; i++){
		final.multiplication(temp);
		temp.plus(one);
	}
	cout << final.getDigit() << endl;
}

int main(){

	int n;
	BigInt a("12323456787654"),b("233245676543223454");
	cout << a.getDigit() << endl;
	cout << b.getDigit() << endl;
	a.plus(b);

	cout << a.getDigit() << endl;
	//solving(n);
}