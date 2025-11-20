/*
*OnlineJudge
*10922 - 2 the 9s
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

        int sum = 0;
        int degree = 1;
        for (int i = 0; i < (int) N.size(); i++)
            sum += N[i] - '0';

        bool multiple = true;
        if (sum%9)
            multiple = false;

        while ((sum != 9) && multiple) {
            int newsum = 0;
            while (sum) {
                newsum += sum%10;
                sum /= 10;
            }
            sum = newsum;
            degree++;
        }
        
        if (multiple)
            cout << N << " is a multiple of 9 and has 9-degree " << degree << "." << endl;
        else
            cout << N << " is not a multiple of 9." << endl;
    }
    return 0;
}