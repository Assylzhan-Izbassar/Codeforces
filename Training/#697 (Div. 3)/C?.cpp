#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int, int> pii;

bool f(pii a, pii b){
    if(a.first < b.first){
        return true;
    }
    return false;
}

void solve(){
    int a, b, k;
    cin >> a >> b >> k;

    int boys[k], girls[k];

    for(int i=0; i < k; ++i){
        cin >> boys[i];
    }
    for(int i=0; i < k; ++i){
        cin >> girls[i];
    }

    vector<pii> v;

    for(int i=0; i < k; ++i){
        pii p = make_pair(boys[i], girls[i]);
        v.push_back(p);
    }

    int cnt = 0;

    for(int i=0; i < k; ++i){
        for(int j=i+1; j < k; ++j){
            if(v[i].first != v[j].first && v[i].second != v[j].second){
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}

int main(){

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}