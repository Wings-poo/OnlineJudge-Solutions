/*
*OnlineJudge
*437 - The Tower of Babylon
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

bool maxtotal (vector <int> A, vector <int> B) {
    int sumA = 0;
    for (int i = 0; i < (int) A.size(); i++)
        sumA += A[i];

    int sumB = 0;
    for (int i = 0; i < (int) B.size(); i++)
        sumB += B[i];

    return sumA > sumB;
}

int main ()
{
    int N;
    int C = 1;
    while (cin >> N) {
        if (!N)
            break;

        vector <pair <pair <int, int>, int>> arr;
        int a, b, c;
        for (int n = 0; n < N; n++) {
            cin >> a >> b >> c;
            arr.push_back(make_pair(make_pair(a, b), c));
            arr.push_back(make_pair(make_pair(b, a), c));
            arr.push_back(make_pair(make_pair(a, c), b));
            arr.push_back(make_pair(make_pair(c, a), b));
            arr.push_back(make_pair(make_pair(b, c), a));
            arr.push_back(make_pair(make_pair(c, b), a));
        }

        sort(arr.begin(), arr.end());

        vector <vector <int>> L (arr.size());
        L[0].push_back(arr[0].second);
        for (int i = 1; i < (int) arr.size(); i++) {
            for (int j = 0; j < i; j++) {
                if ((arr[i].first.first > arr[j].first.first) &&
                    (arr[i].first.second > arr[j].first.second) &&
                    (L[i].size() < L[j].size() + 1)) {
                    L[i] = L[j];
                    }
            }
            L[i].push_back(arr[i].second);
        }

        vector <int> max;
        for (int i = 0; i < (int) L.size(); i++)
            if (maxtotal(L[i],max))
                max = L[i];

        int ans = 0;
        for (int i = 0; i < (int) max.size(); i++)
            ans += max[i];
        printf("Case %d: maximum height = %d\n", C++, ans);
    }
    return 0;
}