/*
*OnlineJudge
*924 - Spreading the News
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

#define INF INT_MAX

void bfs (vector <int> neighbors[], vector <int> &dist, int src)
{
    queue <int> q;

    dist[src] = 0;
    q.push(src);

    while (q.size()) {
        auto u = q.front();
        q.pop();

        for (int i = 0; i < (int) neighbors[u].size(); i++) {
            auto v = neighbors[u][i];

            if (dist[v] == INF) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
}

int main ()
{
    int E;
    cin >> E;

    vector <int> neighbors[E];
    for (int e = 0; e < E; e++) {
        int N;
        cin >> N;

        for (int n = 0; n < N; n++) {
            int friends;
            cin >> friends;
            neighbors[e].push_back(friends);
            //neighbors[friends].push_back(e);
        }
    }

    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        int src;
        cin >> src;

        vector <int> dist (E, INF);
        bfs(neighbors, dist, src);

        int M = 0, D = 0;
        map <int, int> distances;
        for (int e = 0; e < E; e++) {
            if (dist[e] == 0)
                continue;
            distances[dist[e]]++;
        }

        if (distances[INF] == E-1)
            cout << 0 << endl;
        else {
            for (auto &it: distances) {
                if (it.first == INF)
                    continue;
                else if (it.second > M) {
                    M = it.second;
                    D = it.first;
                }
            }
            cout << M << " " << D << endl;
        }
    }
    return 0;
}