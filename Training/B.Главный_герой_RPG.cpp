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
void print(vector<ll> &a){
    for(int i=0; i < a.size(); ++i){
        cout << a[i] << " ";
    }
    cout << endl;
}

void swap(int *a, int *b){
    int *t = a;
    a = b;
    b = t;
}

void test_case(){
    int p, f;
    cin >> p >> f;
    int cnts, cntw;
    cin >> cnts >> cntw;
    int s, w;
    cin >> s >> w;

    if(s > w){
        swap(s,w);
        swap(cnts, cntw);
    }

    int ans = 0;
    
    rep(s1, 0, min(cnts, p/s)+1){
        int w1 = min(cntw, (p-s1*s)/w);
        int s2 = min(cnts - s1, f/s);
        int w2 = min(cntw - w1, (f-s2*s)/w);
        ans = max(ans, (s1 + s2 + w1 + w2));
    }
    cout << ans << endl;
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