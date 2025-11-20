/*
*OnlineJudge
*11786 - Global Raining at Bididibus
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int T;
    cin >> T;
    getchar();
    for (int t = 0; t < T; t++) {
        string terrain;
        getline(cin, terrain);

        stringstream ss(terrain);

        char c;
        int water = 0;
        stack <int> idx;
        int id = 0;
        while (ss >> c) {
            if (c == '\\')
                idx.push(id);
            if ((c == '/') && idx.size()) {
                int id1 = idx.top();
                idx.pop();
                water += (1 + id-id1-1);
            }
            id++;
        }

        cout << water << endl;
    }
    return 0;
}