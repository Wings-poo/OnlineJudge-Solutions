/*
*OnlineJudge
*12545 - Bits Equalizer
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int N;
    cin >> N;
    for (int n = 0; n < N; n++) {
        string S, T;
        cin >> S >> T;

        int s1 = 0, t1 = 0, sto0 = 0, sto1 = 0, change0 = 0, swap1 = 0;
        for (int i = 0; i < (int) S.size(); i++) {
            // check 1s only since you can't change 1 to 0
            if (S[i] == '1')
                s1++;
            if (T[i] == '1')
                t1++;

            // change ? accordingly
            if (S[i] == '?') {
                if (T[i] == '0')
                    sto0++;
                else
                    sto1++;
            }

            // count possible changes from 0 to 1
            if ((S[i] == '0') && (T[i] == '1'))
                change0++;

            // count possible swaps
            if ((S[i] == '1') && (T[i] == '0'))
                swap1++;
        }

        if (s1 > t1)
            cout << "Case " << n+1 << ": " << -1 << endl;
        else
            cout << "Case " << n+1 << ": " << sto0 + sto1 + max(change0, swap1) << endl; 
    }
    return 0;
}