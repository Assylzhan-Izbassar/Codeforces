#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int> > gr;
vector<int> color;
vector<bool> used;

int sum = 0;

void dfs(int v){
    color[v] = 1;
    for(int i=0; i < gr[v].size(); ++i){
        if(color[gr[v][i]] == 0){
            sum++;
            dfs(gr[v][i]);
        }
        if(color[gr[v][i]] == 1){
            return;
        }
    }
    color[v] = 2;
}
void dfs2(int v){
    if(used[v]){
        sum++;
        return;
    }
    used[v] = true;
    for(int i=0; i < gr[v].size(); ++i){
        dfs(gr[v][i]);
    }
}
void solve(){
    int n;
    cin >> n;

    gr = vector<vector<int> >(n);
    color = vector<int> (n);
    used = vector<bool> (n);

    for(int i=0; i < n; ++i){
        int x, y;
        cin >> x >> y;
        --x; --y;
        gr[x].push_back(y);
        gr[y].push_back(x);
    }
    for(int i=0; i < n; ++i){
        fill(color.begin(), color.end(), 0);
        dfs(i);
    }
    cout << sum << endl;
}

int main(){

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }

    return 0;
}