/*
*OnlineJudge
*12696 - Cabin Baggage
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int T;
    cin >> T;
    int bags = 0;
    for (int t = 0; t < T; t++) {
        float length, width, depth, weight;
        cin >> length >> width >> depth >> weight;

        bool allowed = false;
        if ((length <= 56) && (width <= 45) && (depth <= 25))
            allowed = true;
        if ((length + width + depth) <= 125)
            allowed = true;
        if (weight > 7)
            allowed = false;
        
        if (allowed) {
            cout << 1 << endl;
            bags++;
        } else
            cout << 0 << endl;
    }

    cout << bags << endl;
    return 0;
}