#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'jumlahDuaBilangan' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER a
 *  2. INTEGER b
 */

int jumlahDuaBilangan(int a, int b) {
    return a + b;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a_temp;
    getline(cin, a_temp);

    int a = stoi(ltrim(rtrim(a_temp)));

    string b_temp;
    getline(cin, b_temp);

    int b = stoi(ltrim(rtrim(b_temp)));

    int result = jumlahDuaBilangan(a, b);

    // UBAH INI !!!
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
