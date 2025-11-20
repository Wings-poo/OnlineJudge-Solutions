/*
*OnlineJudge
*12750 - Keep Rafa at Chelsea
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        printf("Case %d: ", t+1);

        int N;
        cin >> N;

        int prevprev = 1, prev = 1, curr = 1;
        int lose = 0;
        for (int n = 0; n < N; n++) {
            prevprev = prev;
            prev = curr;
            
            char results;
            cin >> results;

            if (results == 'L') {
                curr = 0;
            } else if (results == 'D')
                curr = 0;
            else
                curr = 1;

            if (!prevprev && !prev && !curr)
                if (!lose)
                    lose = n+1;
        }

        if (!lose)
            cout << "Yay! Mighty Rafa persists!" <<  endl;
        else
            cout << lose << endl;
    }
    return 0;
}