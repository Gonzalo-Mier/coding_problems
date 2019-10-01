///////////////////////////////////////////////////////////////////////////
//                                                                       //
//  https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem    //
//                                                                       //
///////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    cin>>a;
    cin>>b;

    map<int,string> numbers = 
                {{1,"one"},
                {2,"two"},
                {3,"three"},
                {4,"four"},
                {5,"five"},
                {6,"six"},
                {7,"seven"},
                {8,"eight"},
                {9,"nine"}
            };

    for( int i = a; i <= b; i++ )
    {
        if(i<10)
        {
            cout<<numbers[i]<<endl;
        }
        else
        {
            if(i%2)
                cout<<"odd"<<endl;
            else
                cout<<"even"<<endl;
        }
    }


    return 0;
}
