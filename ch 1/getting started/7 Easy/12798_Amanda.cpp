/*
*OnlineJudge
*12798 - Handball
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int N, M;
    while (cin >> N >> M) {
        int good_player = 0;
        for (int n = 0; n < N; n++) {
            bool good = true;
            for (int m = 0; m < M; m++) {
                int score;
                cin >> score;
                if (!score)
                    good = false;
            }
            
            if (good)
                good_player++;
        }

        cout << good_player << endl;
    }
    return 0;
}