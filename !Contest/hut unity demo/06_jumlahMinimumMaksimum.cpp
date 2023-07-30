#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'jumlahMinMaks' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void jumlahMinMaks(vector<int> arr) {
    long int n = 0;
    long int nilai_max = 0;
    long int nilai_min = 0;
    for (int i=0; i < 5; i++){
        for (int j=0; j < 5; j++){
            n += arr[j];
        }
        n -= arr[i];
        
        if (i > 0){
            if(nilai_max < n){
                nilai_max = n;
            }
            if(nilai_min > n){
                nilai_min = n;
            }
        }else{
            nilai_max = n;
            nilai_min = n;
        }
        
        n = 0;

    }
    cout << nilai_min << " " << nilai_max;
}

int main()
{

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(5);

    for (int i = 0; i < 5; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    jumlahMinMaks(arr);
    

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
