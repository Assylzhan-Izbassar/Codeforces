#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <utility> 

using namespace std;

typedef long long ll;

void print(vector<int> &a){
    for(int i=0; i < a.size(); ++i){
        cout << a[i] << " ";
    }
    cout << endl;
}

vector<vector<pair<int, int> > > gr;
vector<int> cnt, w;

ll diff(int i){
    return w[i] * 1ll * cnt[i] - (w[i]/2) * 1ll * cnt[i];
}

void dfs(int v, int i = -1){
    if(gr[v].size() == 1){
        // cout << "We get to list\n";
        cnt[i] = 1;
    }

    for(int u=0; u < gr[v].size(); ++u){
        if(gr[v][u].second == i){
            // cout << gr[v][u].first << " " << gr[v][u].second  << " " << gr[v].size() << " " << v << " <- edge that continued\n";
            continue;
        }
        // cout << "dfs in " << gr[v][u].first << "\n" ;
        dfs(gr[v][u].first, gr[v][u].second);
        // cout << "dfs out " << gr[v][u].first << "\n";
        if(i != -1){
            // cout << cnt[i] + cnt[gr[v][u].second] << " edge: " << i <<  " " <<   gr[v][u].second << " <- if(i != -1) \n";
            cnt[i] += cnt[gr[v][u].second];
        }
    }
}

void test_case(){
    int n;
    ll s;
    cin >> n >> s;

    gr = vector<vector<pair<int, int> > >(n);
    w = cnt = vector<int>(n-1);

    
    for(int i=0; i < n - 1; ++i){
        int x, y;
        cin >> x >> y >> w[i];
        x--; y--;
        gr[x].push_back(make_pair(y,i));
        gr[y].push_back(make_pair(x,i));
    }

    dfs(0);

    set<pair<ll, int> > st;
    ll cur = 0;

    for(int i=0; i < n - 1; ++i){
        st.insert(make_pair(diff(i),i));
        cur += (w[i] * 1ll * cnt[i]);
    }
    //cerr << cur << endl;

    int ans = 0;
    int i = 0;

    while(cur > s){
        i = st.rbegin()->second;
        st.erase(prev(st.end()));
        cur -= diff(i);
        w[i] /= 2;
        st.insert(make_pair(diff(i), i));
        ans++;
    }
    cout << ans << endl;
}

int main(){

    ios::sync_with_stdio(false);

    int t = 1; 
    cin >> t;
    while(t--)
        test_case();

    return 0;
}