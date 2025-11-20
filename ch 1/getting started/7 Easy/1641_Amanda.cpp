/*
*OnlineJudge
*1641 - ASCII Area
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int H, W;
    while (cin >> H >> W) {
        float ans = 0;
        bool inside = false;
        for (int h = 0; h < H; h++) {
            for (int w = 0; w < W; w++) {
                char c;
                cin >> c;
                if (!inside) {
                    if ((c == '\\') or (c == '/')) {
                        inside = true;
                        ans += 0.5;
                    } 
                } else {
                    if ((c == '\\') or (c == '/')) {
                        inside = false;
                        ans += 0.5;
                    } else
                        ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}