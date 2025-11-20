/*
*OnlineJudge
*12996 - Ultimate Mango Challenge
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int T;
    cin >> T;
    
    int Case = 1;
    for (int t = 0; t < T; t++) {
        int N, L;
        cin >> N >> L;

        bool success = true;
        int sum = 0;
        int mangoes[N];
        for (int n = 0; n < N; n++) {
            cin >> mangoes[n];
            sum += mangoes[n];
        }

        if (sum > L)
            success = false;
        
        for (int n = 0; n < N; n++) {
            int eat;
            cin >> eat;
            if (eat < mangoes[n])
                success = false;
        }

        printf("Case %d: ", Case++);
        if (success)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}