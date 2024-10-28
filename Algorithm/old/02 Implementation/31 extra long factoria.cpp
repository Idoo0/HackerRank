#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>
#include <cstring>
#include <numeric>
using namespace std;
class BigInt{
    string digits;
public:
 
    //Constructors:
    BigInt(unsigned long long n = 0);
    BigInt(string &);
    BigInt(const char *);
    BigInt(BigInt &);
 
    //Helper Functions:
    friend void divide_by_2(BigInt &a);
    friend bool Null(const BigInt &);
    friend int Length(const BigInt &);
    int operator[](const int)const;
 
               /* * * * Operator Overloading * * * */
 
    //Direct assignment
    BigInt &operator=(const BigInt &);
 
    //Post/Pre - Incrementation
    BigInt &operator++();
    BigInt operator++(int temp);
    BigInt &operator--();
    BigInt operator--(int temp);
 
    //Addition and Subtraction
    friend BigInt &operator+=(BigInt &, const BigInt &);
    friend BigInt operator+(const BigInt &, const BigInt &);
    friend BigInt operator-(const BigInt &, const BigInt &);
    friend BigInt &operator-=(BigInt &, const BigInt &);
 
    //Comparison operators
    friend bool operator==(const BigInt &, const BigInt &);
    friend bool operator!=(const BigInt &, const BigInt &);
 
    friend bool operator>(const BigInt &, const BigInt &);
    friend bool operator>=(const BigInt &, const BigInt &);
    friend bool operator<(const BigInt &, const BigInt &);
    friend bool operator<=(const BigInt &, const BigInt &);
 
    //Multiplication and Division
    friend BigInt &operator*=(BigInt &, const BigInt &);
    friend BigInt operator*(const BigInt &, const BigInt &);
    friend BigInt &operator/=(BigInt &, const BigInt &);
    friend BigInt operator/(const BigInt &, const BigInt &);
 
    //Modulo
    friend BigInt operator%(const BigInt &, const BigInt &);
    friend BigInt &operator%=(BigInt &, const BigInt &);
 
    //Power Function
    friend BigInt &operator^=(BigInt &,const BigInt &);
    friend BigInt operator^(BigInt &, const BigInt &);
     
    //Square Root Function
    friend BigInt sqrt(BigInt &a);
 
    //Read and Write
    friend ostream &operator<<(ostream &,const BigInt &);
    friend istream &operator>>(istream &, BigInt &);
 
    //Others
    friend BigInt NthCatalan(int n);
    friend BigInt NthFibonacci(int n);
    friend BigInt Factorial(int n);
};
BigInt::BigInt(string & s){
    digits = "";
    int n = s.size();
    for (int i = n - 1; i >= 0;i--){
        if(!isdigit(s[i]))
            throw("ERROR");
        digits.push_back(s[i] - '0');
    }
}
BigInt::BigInt(unsigned long long nr){
    do{
        digits.push_back(nr % 10);
        nr /= 10;
    } while (nr);
}
BigInt::BigInt(const char *s){
    digits = "";
    for (int i = strlen(s) - 1; i >= 0;i--)
    {
        if(!isdigit(s[i]))
            throw("ERROR");
        digits.push_back(s[i] - '0');
    }
}
BigInt::BigInt(BigInt & a){
    digits = a.digits;
}
bool Null(const BigInt& a){
    if(a.digits.size() == 1 && a.digits[0] == 0)
        return true;
    return false;
}
BigInt &BigInt::operator=(const BigInt &a){
    digits = a.digits;
    return *this;
}
BigInt &operator*=(BigInt &a, const BigInt &b)
{
    if(Null(a) || Null(b)){
        a = BigInt();
        return a;
    }
    int n = a.digits.size(), m = b.digits.size();
    vector<int> v(n + m, 0);
    for (int i = 0; i < n;i++)
        for (int j = 0; j < m;j++){
            v[i + j] += (a.digits[i] ) * (b.digits[j]);
        }
    n += m;
    a.digits.resize(v.size());
    for (int s, i = 0, t = 0; i < n; i++)
    {
        s = t + v[i];
        v[i] = s % 10;
        t = s / 10;
        a.digits[i] = v[i] ;
    }
    for (int i = n - 1; i >= 1 && !v[i];i--)
            a.digits.pop_back();
    return a;
}
BigInt Factorial(int n){
    BigInt f(1);
    for (int i = 2; i <= n;i++)
        f *= i;
    return f;
}
ostream &operator<<(ostream &out,const BigInt &a){
    for (int i = a.digits.size() - 1; i >= 0;i--)
        cout << (short)a.digits[i];
    return cout;
}

void solving(int n){

	BigInt solution("0");

	cout << Factorial(n);

}

int main(){

	int n;
	cin >> n;
	solving(n);
}