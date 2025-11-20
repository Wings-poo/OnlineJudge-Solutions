/*
*OnlineJudge
*787 - Maximum Sub-sequence Product
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int arr[100];
    int digit;
    int n = 0;
    while (cin >> digit) {
        if (digit != -999999)
            arr[n++] = digit;
        else {
            long long ans = arr[0];
            for (int i = 0; i < n; i++) {
                long long max_here = arr[i];
                for (int j = i+1; j < n; j++) {
                    ans = max(ans, max_here);
                    max_here *= arr[j];
                }
                ans = max(ans, max_here);
            }
            cout << ans << endl;
            n = 0;
        }
    }
    return 0;
}