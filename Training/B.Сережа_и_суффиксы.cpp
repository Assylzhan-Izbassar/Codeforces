#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>

using namespace std;

vector<bool> check(1e6, true);

int main(){

    ios::sync_with_stdio(false);
    int n,m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> l(m);

    for(int i=0; i < n; ++i) cin >> a[i];
    for(int i=0; i < m; ++i) cin >> l[i];

    vector<int> res(n);
    res[n-1] = check[a[n-1]];
    
    for(int i=a.size()-2; i >=0; --i){
        res[i] = res[i+1] + check[a[i]];
        check[a[i]] = false;
    }

    for(int i=0; i < m; ++i){
        cout << res[l[i]-1] << endl;
    }

    return 0;
}