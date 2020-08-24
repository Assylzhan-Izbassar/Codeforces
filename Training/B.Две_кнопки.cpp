#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <queue>
#include <deque>
#include <bitset>
#include <stack>

using namespace std;

#define pb push_back
#define mp make_pair
#define sz(c) (int)((c).size())
#define all(c) c.begin(),c.end()
#define rep(i,a,n) for (int i = a; i < n; i++)
#define fi first
#define se second

typedef long long ll;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef pair<int, int> pii;
typedef tuple<int, int, int> tp;


void print(vector<int> &a){
    for(int i=0; i < a.size(); ++i){
        cout << a[i] << " ";
    }
    cout << endl;
}

int n, m;

vi dist(4*1e4);
vb used(4*1e4);
queue<int> q;

void bfs(int x){

    dist[x] = 0;
    used[x] = true;
    q.push(x);

    while(!q.empty()){
        int i = q.front();
        q.pop();

        if(i > 0 && !used[i-1]){
            dist[i-1] = dist[i] + 1;
            used[i-1] = true;
            q.push(i-1);
        }
        if(i <= m && !used[i+i]){
            dist[i+i] = dist[i] + 1;
            used[i+i] = true;
            q.push(i+i);
        }
    }
}

void test_case(){

    cin >> n >> m;
    bfs(n);
    cout << dist[m] << endl;
}

int main(){

    #ifdef _DEBUG
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1; 
    // cin >> t;
    while(t--)
        test_case();

    return 0;
}