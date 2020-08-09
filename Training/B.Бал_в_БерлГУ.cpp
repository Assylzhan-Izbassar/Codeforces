#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <queue>

using namespace std;

typedef long long ll;

void print(vector<int> &a){
    for(int i=0; i < a.size(); ++i){
        cout << a[i] << " ";
    }
    cout << endl;
}

void test_case(){
    int n;
    cin >> n;

    vector<int> a(n);

    for(int i=0; i < n; ++i) cin >> a[i];

    int m;
    cin >> m;

    vector<int> b(m);

    for(int i=0; i < m; ++i) cin >> b[i];

    vector<bool> used(m,false);

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int cnt = 0;

    for(int i=0; i < n; ++i){
        for(int j=0; j < m; ++j){
            if(!used[j] && abs(a[i]-b[j])<=1){
                used[j] = true;
                cnt++;
                break;
            }
        }
    }
    cout << cnt << endl;
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