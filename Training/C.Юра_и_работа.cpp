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

using namespace std;

#define pb push_back
typedef long long ll;

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
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> p(n);
    vector<ll> psum(n+1);

    for(int i=1; i <=n; ++i) cin >> p[i-1], psum[i] = psum[i-1] + p[i-1];

    ll dp[k+1][n+1];

    for(int i=0; i <= k; ++i)
        for(int j=0; j <= n; ++j)
            dp[i][j] = 0;

    for(int i=1; i <= k; ++i){
        for(int j=1; j <= n; ++j){
            if(i*m > j){
                dp[i][j] = 0;
            }else{
                dp[i][j] = max(dp[i][j-1], dp[i-1][j-m] + psum[j] - psum[j-m]);
            }
        }
    }
    // print(psum);

    //  for(int i=0; i <= k; ++i){
    //     for(int j=0; j <= n; ++j){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    cout << dp[k][n] << endl;
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