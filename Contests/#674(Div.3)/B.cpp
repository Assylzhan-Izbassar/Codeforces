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

    int n, m;
    cin >> n >> m;

    int p[2][2];

    if(m % 2 != 0){
        cout << "NO\n";
        return;
    }

    for(int i=0; i < n; ++i){
        for(int i=0; i < 2; ++i){
            for(int j=0; j < 2; ++j){
                cin >> p[i][j];
            }
        }
        if(p[1][0] == p[0][1]){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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