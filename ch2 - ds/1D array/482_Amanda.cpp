/*
*OnlineJudge
*482 - Permutation Arrays
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int N;
    cin >> N; 
    getchar();

    bool first = true;
    for (int n = 0; n < N; n++) {
        if (first)
            first = false;
        else
            cout << endl;
            
        getchar();

        string str;
        getline(cin, str);

        stringstream ss(str);
        vector <int> idx;
        int x;
        while (ss >> x)
            idx.push_back(x);
        
        getline(cin, str);
        stringstream ss2(str);

        vector <string> arr (idx.size());
        for (int i = 0; i < idx.size(); i++) 
            ss2 >> arr[idx[i] - 1];
        
        for (int i = 0; i < idx.size(); i++) {
            cout << arr[i] << endl;
        }
    }
    return 0;
}