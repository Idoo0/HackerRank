#include <bits/stdc++.h>
#include <cmath>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'kelilingLingkaranPersegi' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER r
 *  2. INTEGER a
 */

string kelilingLingkaranPersegi(int r, int a) {
    
  float kl = 2 * 3.14 * r;
  int sp = sqrt(a);
  float kp = 4 * sp;
  string n;

  if (kl > kp){
    n = "True";
  }else{
    n = "False";
  }
  return n;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string r_temp;
    getline(cin, r_temp);

    int r = stoi(ltrim(rtrim(r_temp)));

    string a_temp;
    getline(cin, a_temp);

    int a = stoi(ltrim(rtrim(a_temp)));

    string result = kelilingLingkaranPersegi(r, a);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
