/*
*OnlineJudge
*13012 - Identifying tea
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int T;
    while (cin >> T) {
        int tea;
        int teama = 0; // a mix between tea and tama, k, corny
        
        for (int t = 0; t < 5; t++) {
            cin >> tea;
            if (tea == T)
                teama++;
        }

        cout << teama << endl;
    }
    return 0;
}