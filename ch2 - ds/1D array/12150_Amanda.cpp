/*
*OnlineJudge
*12150 - Pole Position
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int N, C, P;
    while (cin >> N) {
        if (!N)
            break;
        
        int starting[N] = {0};
        int id = 0;
        bool valid = true;
        for (int n = 0; n < N; n++) {
            cin >> C >> P;

            if (!valid)
                continue;

            if (((id + P) >= N) || ((id + P) < 0))
                valid = false;
            else if (starting[id+P] != 0)
                valid = false;
            else
                starting[id+P] = C;
            
            id++;
        }

        if (!valid)
            cout << -1 << endl;
        else {
            bool first = true;
            for (int n = 0; n < N; n++) {
                if (first)
                    first = false;
                else
                    cout << " ";
                cout << starting[n];
            }
            cout << endl;
        }
    }
    return 0;
}