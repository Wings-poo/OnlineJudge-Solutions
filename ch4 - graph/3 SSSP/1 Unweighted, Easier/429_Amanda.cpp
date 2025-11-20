/*
*OnlineJudge
*429 - Word Transformation
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

#define INF INT_MAX

void bfs (vector <int> neighbors[], vector <int> &dist, int source)
{
    queue <int> q;

    dist[source] = 0;
    q.push(source);

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
    int N;
    cin >> N;
    getchar();

    int first = true;
    for (int n = 0; n < N; n++) {
        if (first)
            first = false;
        else
            cout << endl;
            
        getchar();
        string word;

        vector <string> dict;
        map <string, int> idx;
        while (1) {
            getline(cin, word);
            if (word == "*")
                break;

            if (idx.find(word) == idx.end()) {
                idx[word] = dict.size();
                dict.push_back(word);
            }
        }

        // connecting neighbor words
        vector <int> neighbors[dict.size()];
        for (int i = 0; i < (int) dict.size(); i++) {
            for (int j = i+1; j < (int) dict.size(); j++) {
                if (dict[i].size() != dict[j].size())
                    continue;
                
                int diff = 0;
                for (int k = 0; k < (int) dict[i].size(); k++) {
                    if (diff > 1)
                        break;
                    
                    if (dict[i][k] != dict[j][k])
                        diff++;
                }

                if (diff == 1) {
                    neighbors[i].push_back(j);
                    neighbors[j].push_back(i);
                }
            }
        }

        while(1) {
            if ((cin.peek() == '\n') || (cin.peek() == EOF))
                break;

            getline(cin, word);
            
            stringstream ss(word);

            string A, B;
            ss >> A >> B;

            vector <int> dist (dict.size(), INF);
            bfs(neighbors, dist, idx[A]);

            cout << A << " " << B << " " << dist[idx[B]] << endl;
        }
        
    }
    return 0;
}