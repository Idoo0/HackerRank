#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
/*
 * Complete the 'tripelPythagoras' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER a
 *  2. INTEGER b
 *  3. INTEGER c
 */

string tripelPythagoras(int a, int b, int c) {
  string n;
  int ax;
  int bx;
  int cx;
  if (a > b and a > c){
      ax = a;
      if (b > c){
          bx = b;
          cx = c;
      }else{
          bx = c;
          cx = b;
      }
  }else if (b > a and b > c){
      ax = b;
      if (a > c){
          bx = a;
          cx = c;
      }else{
          bx = c;
          cx = a;
      }
  }else{
      ax = c;
      if (a > b){
          bx = a;
          cx = b;
      }else{
          bx = b;
          cx = a;
      }
  }
  if ((ax*ax) == (bx*bx + cx*cx)){
      n = "True";
  }else{
      n = "False";
  }
  return n;
 }
  

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
    
    //========================
    
    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));
    
    int x = stoi(first_multiple_input[0]);

    int y = stoi(first_multiple_input[1]);

    int z = stoi(first_multiple_input[2]);

    //========================
    
    /*
    string a_temp;
    getline(cin, a_temp);

    int a = stoi(ltrim(rtrim(a_temp)));

    string b_temp;
    getline(cin, b_temp);

    int b = stoi(ltrim(rtrim(b_temp)));

    string c_temp;
    getline(cin, c_temp);

    int c = stoi(ltrim(rtrim(c_temp)));
    */

    string result = tripelPythagoras(x, y, z);

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
