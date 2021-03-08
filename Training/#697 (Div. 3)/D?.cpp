#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// sum(a[i]) >= m
// sum(b[i]) -> min

typedef pair<int, int> pii;

vector<pii> v;

bool f(pii a, pii b){
    if(a.second < b.second){
        return true;
    }else if(a.second == b.second){
        if(a.first > b.first){
            return true;
        }
    }
    return false;
}

void solve(){

    int n, m;
    cin >> n >> m;

    int a[n], b[n];

    for(int i=0; i < n; ++i){
        cin >> a[i];
    }

    for(int i=0; i < n; ++i){
        cin >> b[i];
    }

    for(int i=0; i < n; ++i){
        pii p = make_pair(a[i], b[i]);
        v.push_back(p);
    }

    sort(v.begin(), v.end(), f);

    int sum = 0;
    int w = 0;

    for(int i=0; i < n; ++i){
        if(sum + v[i].first < m){
            sum += v[i].first;
            w += v[i].second;
        }
    }

    cout << w << endl;
} 

int main(){

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}