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
#define rrep(i,a,n) for(int i = n-1; i >= 0; --i)
#define each(x, a) for(auto x : a)
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
void print(vector<ll> &a){
    for(int i=0; i < a.size(); ++i){
        cout << a[i] << " ";
    }
    cout << endl;
}
struct node{
    int sum;
    int last;
};
void test_case(){

    int n;
    cin >> n;

    queue<node> qq;

    vi dist(n+1,0);
    vb used(n+1,false);

    qq.push({1,1});
    used[1] = true;
    dist[1] = 0;

    while(!qq.empty()){
        node aa = qq.front();
        qq.pop();
        cout << aa.sum << " " << aa.last << endl;
        if(aa.sum + 1 <= n && !used[aa.sum+1]){
            qq.push({aa.sum+1, aa.last+1});
            used[aa.sum+1] = true;
            dist[aa.sum+1] = dist[aa.sum]+1;
        }
        if(aa.sum + aa.last <= n && !used[aa.sum + aa.last]){
            qq.push({aa.sum + aa.last, aa.last});
            used[aa.sum+aa.last] = true;
            dist[aa.sum+aa.last] = dist[aa.sum]+1;
        }
    }
    cout << endl;
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
    cin >> t;
    while(t--)
        test_case();

    return 0;
}