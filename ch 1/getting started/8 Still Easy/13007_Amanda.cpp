/*
*OnlineJudge
*13007 - D as in Daedalus
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int N, M;
    while (cin >> N >> M) {
        int B = 0;
        int origtotal = 0, newtotal = 0;
        int bets[M][N];
        for (int m = 0; m < M; m++) {
            cin >> B;
            
            int sum = 0;
            for (int n = 0; n < N; n++) {
                cin >> bets[m][n];
                if (n)                
                    sum += bets[m][n];
            }

            if ((sum + bets[m][0]) <= B)
                origtotal += bets[m][0];

            if ((sum + 10000) <= B)
                newtotal += 10000;
            else if ((sum + 1000) <= B)
                newtotal += 1000;
            else if ((sum + 100) <= B)
                newtotal += 100;
            else if ((sum + 10) <= B)
                newtotal += 10;
            else if ((sum + 1) <= B)
                newtotal += 1;
        }
        
        cout << newtotal - origtotal << endl;
    }
    return 0;
}