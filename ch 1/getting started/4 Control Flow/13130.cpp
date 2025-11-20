/*
*OnlineJudge
*13130 - Cacho
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        int a_prev, a_curr;
        bool yes = true;
        for (int i = 0; i < 5; i++) {
            a_prev = a_curr;
            cin >> a_curr;
            if (i) {
                if ((a_curr - a_prev) != 1)
                    yes = false;
            }
        }

        if (yes)
            cout << 'Y' << endl;
        else
            cout << 'N' << endl;
    }
    return 0;
}