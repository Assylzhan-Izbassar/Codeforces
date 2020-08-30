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

//4
//1 4 1 1
//  ||
//1 2 2 2 2 3 4

const int INF = 1e9;
vi a;
int f(int l, int r){
    if(l > r) return 0;

    int mini = INF, indx = -1;

    rep(i, l, r+1){
        if(a[i] < mini){
            mini = a[i];
            indx = i;
        }
    }
    rep(i, l, r+1){
        a[i] -= mini;
    }
    return min(r-l+1, f(l, indx-1) + f(indx+1, r) + mini);

}
void test_case(){
    int n;
    cin >> n;
    a = vi(n+1);
    rep(i, 1, n+1) cin >> a[i];

    cout << f(1, n) << endl;
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