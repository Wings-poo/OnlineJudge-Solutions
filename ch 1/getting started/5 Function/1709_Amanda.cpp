/*
*OnlineJudge
*1709 - Amalgamated Artichokes
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int p, a, b, c, d, n;
    while (cin >> p >> a >> b >> c >> d >> n) {
        double curr_price = p * (sin(a + b) + cos(c + d) + 2);
        double max_now = curr_price;
        double diff = 0;
        for (int k = 2; k <= n; k++) {
            curr_price = p * (sin(a*k + b) + cos(c*k + d) + 2);

            if ((curr_price - max_now) > 0) {
                max_now = curr_price;
            } else {
                diff = min(diff, curr_price - max_now);  
            }

        }

        if (diff >= 0)
            cout << "0.00" << endl;
        else
            cout << setprecision(6) << fixed << fabs(diff) << endl;
    }
    return 0;
}