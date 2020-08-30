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

void test_case(){
    int n;
    cin >> n;

    vi a(n);

    rep(i, 0, n) cin >> a[i];

    vi l(n, 1);
    vi r(n, 1);

    int ans = 1;

    rrep(i, 0, n-1){
        if(a[i+1] > a[i]) r[i] = r[i+1] + 1;
        ans = max(ans, r[i]);
    }

    rep(i, 1, n){
        if(a[i-1] < a[i]) l[i] = l[i-1] + 1;
        ans = max(ans, l[i]);
    }

    rep(i, 0, n-2){
        if(a[i] < a[i+2])ans = max(ans, l[i] + r[i+2]);
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
    // cin >> t;
    while(t--)
        test_case();

    return 0;
}