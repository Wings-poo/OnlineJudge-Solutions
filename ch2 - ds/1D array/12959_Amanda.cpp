/*
*OnlineJudge
*12959 - Strategy Game
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int J, R;
    while (cin >> J >> R) {
        int players[J] = {0};
        for (int r = 0; r < R; r++) {
            for (int j = 0; j < J; j++) {
                int score;
                cin >> score;
                players[j] += score;
            }
        }

        int maxscorer = 0;
        int maxscore = 0;
        for (int j = 0; j < J; j++) {
            if (players[j] >= maxscore) {
                maxscorer = j;
                maxscore = players[j];
            }
        }

        cout << maxscorer + 1 << endl;
    }
    return 0;
}