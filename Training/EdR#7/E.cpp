#include <iostream>
#include <vector>

using namespace std;

int n;
vector<bool> used;
vector<vector<int> > gr;

void dfs(int x){
    if((int)gr[x].size() == 0){
        return;
    }
    for(int i=0; i < (int)gr[x].size(); ++i){
        dfs(gr[x][i]);
        if(used[x])
            continue;
        used[x] = true;
    }   
}

int main(){

    cin >> n;
    used = vector<bool> (n, false);
    gr = vector<vector<int> > (n);

    for(int i=0; i < n; ++i){
        int x, y;
        cin >> x >> y;
        x--; y--;
        gr[x].push_back(y); 
    }


    return 0;
}