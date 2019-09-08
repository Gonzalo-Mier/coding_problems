///////////////////////////////////////////////////////////////////////////
//                                                                       //
//  https://www.hackerrank.com/challenges/time-conversion/problem        //
//                                                                       //
///////////////////////////////////////////////////////////////////////////


#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    /*
     * Write your code here.
     */
    string s_h = s.substr(0,2);
    string s_m_s = s.substr(2,6);
    int h = std::stoi(s_h,nullptr);
    if ( s[8] == 'P' )
    { 
        if(h==12) 
            s_h="12";
        else 
            s_h = to_string((h+12)%24);
    }
    else if(h==12) 
        s_h="00";

    return s_h+s_m_s;
     
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
