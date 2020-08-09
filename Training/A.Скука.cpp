#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <iomanip>

using namespace std;

typedef long long ll;

void print(vector<ll> &a){
    for(int i=0; i < a.size(); ++i){
        cout << a[i] << " ";
    }
    cout << endl;
}
void print(vector<int> &a){
    for(int i=0; i < a.size(); ++i){
        cout << a[i] << " ";
    }
    cout << endl;
}

const int N = 1e5+7;
int cnt[N];
vector<ll> dp(N);

void test_case(){

    int n;
    cin >> n;

    vector<int> a(n);

    int maxn = -1;

    for(int i=0; i < N; ++i) cnt[i] = 0;
    for(int i=0; i < n; ++i){
        cin >> a[i]; cnt[a[i]]++;
        if(a[i] > maxn) maxn = a[i];
    }
    maxn = max(n, maxn);

    dp[0] = 0;
    dp[1] = cnt[1];

    for(int i=2; i <= maxn; ++i){
        dp[i] = max(dp[i-1], dp[i-2] + 1ll*cnt[i]*i);
    }
    
    cout << dp[maxn] << endl;
}

int main(){

    #ifdef _DEBUG
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false);
    int t = 1; 
    // cin >> t;
    while(t--)
        test_case();

    return 0;
}