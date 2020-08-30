#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    int aCount = 0;
    long res = 1;
        for(char c : s){
            if(c == 'a'){
                aCount++;
            }
        }
    long coveredStringCount = n / s.length();
    res = coveredStringCount * aCount;

    int leftLengthToCover = n % s.length();

    for(int i = 0; i < leftLengthToCover; i++){
        if(s[i] == 'a'){
            res++;
        }
    }
    return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}

