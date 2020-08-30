#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int level = 0, valleyCount = 0;
        for(char c : s){
            // a valley is covered if level = 0 and we went upHill to reach the seaLevel that is where we covered a valley
            if(c == 'U') level++;
            else level--;

            if(level == 0 && c == 'U'){
                valleyCount++;
            }
        }
    return valleyCount;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}

