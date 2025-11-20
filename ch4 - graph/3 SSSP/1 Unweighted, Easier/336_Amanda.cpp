/*
*OnlineJudge
*336 - A Node Too Far
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

#define INF INT_MAX

void bfs (vector <int> neighbors[], vector <int> &dist, int S)
{
    for (int n = 0; n < (int) dist.size(); n++)
        dist[n] = INF;
    //memset(dist, INF, N*N*sizeof(dist[0]));

    queue <int> q;

    dist[S] = 0;
    q.push(S);

    while (!q.empty()) {
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

    return;
}

int main ()
{
    int NC;
    int Q = 1;
    while (cin >> NC) {
        if (!NC)
            break;
        
        map <int, int> idx;
        vector <int> neighbors[30];
        for (int nc = 0; nc < NC; nc++) {
            int a, b;
            cin >> a >> b;

            if (idx.find(a) == idx.end())
                idx[a] = idx.size();
                // mali 'to sa pc ko for some reason may +1
                // pero tama sa onlinejudge
            if (idx.find(b) == idx.end()) 
                idx[b] = idx.size();

            neighbors[idx[a]].push_back(idx[b]);
            neighbors[idx[b]].push_back(idx[a]);
        }

        int A, B;
        while (cin >> A >> B) {
            if (!A && !B)
                break;

            int ans = 0;
            if (idx.find(A) != idx.end()) {
                vector <int> dist (idx.size());
                bfs(neighbors, dist, idx[A]);

                for (int i = 0; i < idx.size(); i++)
                    if (dist[i] > B)
                        ans++;
            } else {
                ans = idx.size();
            }

            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n", Q++, ans, A, B);
        }
        
    }
    return 0;
}