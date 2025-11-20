/*
*OnlineJudge
*10929 - You can say 11
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string N;
    while (cin >> N) {
        if (N == "0")
            break;
        
        int odd_sum = 0, even_sum = 0;
        for (int i = 0; i < (int) N.size(); i++) {
            if (i%2)
                odd_sum += N[i] - '0';
            else
                even_sum += N[i] - '0';
        }

        if ((odd_sum - even_sum)%11)
            cout << N << " is not a multiple of 11." << endl;
        else
            cout << N << " is a multiple of 11." << endl;
    }
    return 0;
}