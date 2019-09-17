///////////////////////////////////////////////////////////////////
//                                                               //
//https://www.hackerrank.com/challenges/counting-valleys/problem //
//                                                               //
///////////////////////////////////////////////////////////////////


#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int height {0};
    int last_height {0};
    int valleys {0};
    for (int i=0; i<s.size(); i++) 
    {
        last_height = height;
        height+=(s[i]=='U')?1:-1; 
        if (height==0 && last_height==-1)
        {
            valleys++;
        }
    }
    return valleys;
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
