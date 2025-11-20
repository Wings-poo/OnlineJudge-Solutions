/*
*OnlineJudge
*12917 - Prop hunt!
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int P, H, O;
    while (cin >> P >> H >> O) {
        if ((O-H) >= P)
            cout << "Props win!" << endl;
        else
            cout << "Hunters win!" << endl;
    }
    return 0;
}