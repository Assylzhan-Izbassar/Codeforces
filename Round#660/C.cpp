#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

const int n = 1e5 + 5;

vector<vector<int> > gr;
vector<int> p, h, good(n), cnt(n);
bool result = true;

void dfs(int v, int parent = -1){
    cnt[v] = p[v];
    int g_sum = 0;

    for(int to = 0; to < gr[v].size(); ++to){
        if(gr[v][to] == parent) continue;
        dfs(gr[v][to], v);
        g_sum += good[gr[v][to]];
        cnt[v] += cnt[gr[v][to]];
    }

    if((cnt[v] + h[v]) % 2 != 0)
        result = false;
    good[v] = (cnt[v] + h[v]) / 2;
    if(good[v] < 0 || good[v] > cnt[v])
        result = false;
    if(g_sum > good[v])
        result = false;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;
        p.resize(n); h.resize(n); gr.resize(n);

        for(int i=0; i < n; ++i) cin >> p[i];
        for(int i=0; i < n; ++i) cin >> h[i];

        for(int i=0; i < n-1; ++i){
            int x, y;
            cin >> x >> y;
            gr[--x].push_back(--y);
            gr[y].push_back(x);
        }
        dfs(0);
        cout << (result ? "YES\n" : "NO\n");

        result = true;
        gr.clear();
    }

    return 0;
}