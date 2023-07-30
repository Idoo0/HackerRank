#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'x_dan_o' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string x_dan_o(string s) {
  int count_x = 0;
  int count_y = 0;
  string n = "True";

  for (char c : s){
    if(c == 'x' or c == 'X'){
      count_x++;
    }
    if(c == 'o' or c == 'O'){
      count_y++;
    }
  }

  if (count_x == count_y){
    n = "True";
    if (s.length() == 0){
      n = "False";
    }
  }else{
    n = "False";
  }

  return n; 
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = x_dan_o(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
