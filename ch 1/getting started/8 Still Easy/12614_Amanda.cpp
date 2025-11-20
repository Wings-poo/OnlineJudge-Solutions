/*
*OnlineJudge
*12614 - Earn For Future!
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        int N;
        cin >> N;

        long long numbers[N];
        long long maxnum = 0;
        for (int n = 0; n < N; n++) {
            long long x;
            cin >> x;
            numbers[n] = x;
            maxnum = max(maxnum, x);
        }

        for (int n = 0; n < N; n++) {
            for (int m = n+1; m < N; m++)
                maxnum = max(maxnum, numbers[n] & numbers[m]);
        }

        cout << "Case " << t +1 << ": " << maxnum << endl;
    }
    return 0;
}