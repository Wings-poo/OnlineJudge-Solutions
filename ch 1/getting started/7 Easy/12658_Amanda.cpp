/*
*OnlineJudge
*12658 - Character Recognition?
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int N;
    cin >> N;
    char symbols[5][4*N];
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 4*N; j++)
            cin >> symbols[i][j];
    
    for (int i = 0; i < 4*N - 2; i++) {
        if ((symbols[0][i] ==  '.') && (symbols[0][i+1] ==  '*') && (symbols[0][i+2] ==  '.')
        && (symbols[1][i] ==  '.') && (symbols[1][i+1] ==  '*') && (symbols[1][i+2] ==  '.')
        && (symbols[2][i] ==  '.') && (symbols[2][i+1] ==  '*') && (symbols[2][i+2] ==  '.')
        && (symbols[3][i] ==  '.') && (symbols[3][i+1] ==  '*') && (symbols[3][i+2] ==  '.')
        && (symbols[4][i] ==  '.') && (symbols[4][i+1] ==  '*') && (symbols[4][i+2] ==  '.'))        
            cout << '1';

        if ((symbols[0][i] ==  '*') && (symbols[0][i+1] ==  '*') && (symbols[0][i+2] ==  '*')
        && (symbols[1][i] ==  '.') && (symbols[1][i+1] ==  '.') && (symbols[1][i+2] ==  '*')
        && (symbols[2][i] ==  '*') && (symbols[2][i+1] ==  '*') && (symbols[2][i+2] ==  '*')
        && (symbols[3][i] ==  '*') && (symbols[3][i+1] ==  '.') && (symbols[3][i+2] ==  '.')
        && (symbols[4][i] ==  '*') && (symbols[4][i+1] ==  '*') && (symbols[4][i+2] ==  '*'))        
            cout << '2';

        if ((symbols[0][i] ==  '*') && (symbols[0][i+1] ==  '*') && (symbols[0][i+2] ==  '*')
        && (symbols[1][i] ==  '.') && (symbols[1][i+1] ==  '.') && (symbols[1][i+2] ==  '*')
        && (symbols[2][i] ==  '*') && (symbols[2][i+1] ==  '*') && (symbols[2][i+2] ==  '*')
        && (symbols[3][i] ==  '.') && (symbols[3][i+1] ==  '.') && (symbols[3][i+2] ==  '*')
        && (symbols[4][i] ==  '*') && (symbols[4][i+1] ==  '*') && (symbols[4][i+2] ==  '*'))        
            cout << '3';
    }

    cout << endl;

    return 0;
}