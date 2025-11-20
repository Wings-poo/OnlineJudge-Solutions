/*
*OnlineJudge
*12643 - Tennis Rounds
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long N, i, j;
    while (cin >> N >> i >> j) {
        int ans = 1;
        
        long long i2 = ceil(i/2.0);
        long long j2 = ceil(j/2.0);

        while (i2 != j2) {
            i = i2;
            j = j2;
            i2 = ceil(i/2.0);
            j2 = ceil(j/2.0);
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}