#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>
using namespace std;

string getWord(int h){
	map<int, string> word;
	word[1]  = "one";
	word[2]  = "two";
	word[3]  = "three";
	word[4]  = "four";
	word[5]  = "five";
	word[6]  = "six";
	word[7]  = "seven";
	word[8]  = "eight";
	word[9]  = "nine";
	word[10] = "ten";
	word[11] = "eleven";
	word[12] = "twelve";
	word[13] = "thirteen";
	word[14] = "fourteen";
	word[15] = "quarter";
	word[16] = "sixteen";
	word[17] = "seventeen";
	word[18] = "eightteen";
	word[19] = "nineteen";
	word[20] = "twenty";
	word[30] = "half";

	return word[h];
}
string solving(int h, int m){

	string res, temp, minute;
	int temp1, temp2;
	if (m == 0){
		res = getWord(h) + " o' clock";
	}else if (m >= 1 and m <= 30){ 
		temp = getWord(m);
		if (m > 20){
			temp1 = m/10 * 10;
			temp2 = m%10;
			temp = getWord(temp1) + " " + getWord(temp2);
		}
		if (m == 15 or m == 30){
			res = getWord(m) + " past " + getWord(h);
		}else{
			res = (m == 1)? temp + " minute past " + getWord(h) : temp + " minutes past " + getWord(h);		
		}
	}else{
		m = 60 - m; h++;
		temp = getWord(m);
		if (m > 20){
			temp1 = m/10 * 10;
			temp2 = m%10;
			temp = getWord(temp1) + " " + getWord(temp2);
		}
		if (m == 15 or m == 30){
			res = getWord(m) + " to " + getWord(h);
		}else{
			res = (m == 1)? temp + " minute to " + getWord(h) : temp + " minutes to " + getWord(h);	
		}
		
	}

	return res;
}

int main(){

	int h, m;
	cin >> h >> m;
	cout << solving(h, m);
}