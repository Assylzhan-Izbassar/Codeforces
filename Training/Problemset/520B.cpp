#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int n, m;
vector<bool> used;
vector<int> dist;

void bfs(int v) {

    queue<int> q;
    
    used[v] = true;
    dist[v] = 0;
    q.push(v);

    while(!q.empty()) {
        int u = q.front(); 
        q.pop();

        if(2*u <= used.size() && !used[2*u]) {
            q.push(2*u);
            dist[2*u] = dist[u] + 1;
            used[2*u] = true;
        }
        if((u-1) >= 0 && !used[u-1]) {
            q.push(u-1);
            dist[u-1] = dist[u] + 1;
            used[u-1] = true;
        }
    }
}

int main() {

    cin >> n >> m;

    used = vector<bool> (max(n,m) * 2 + 1);
    dist = vector<int> (max(n,m) * 2 + 1);

    bfs(n);
    
    cout << dist[m] << endl;

    return 0;
}