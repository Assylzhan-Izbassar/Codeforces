#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

void solve(){
    int n;
    cin >> n;

    int a[2*n];

    set<int> as;

    for(int i=0; i < 2*n; ++i) cin >> a[i], as.insert(a[i]);

    sort(a, a+2*n);

    vector<pair<int,int> > sums(1001);

    for(int i=2*n-1; i > 0; --i){
        for(int j=i-1; j >= 0; --j){
            if(a[i] + a[j] >= a[2*n-1]){
                sums[(a[i] + a[j])] = make_pair(a[i], a[j]);
            }
        }
    }

    for(int i=0; i < n+1; ++i){
        set<int> t = as;
        bool f = true;
        int x;  
        for(int i=1000; i >= 1; --i){
            if(t.empty())
                break;
            if(sums[i] != make_pair(0,0)){
                if(f){
                    x = i;
                    f = false;
                    t.erase(t.find(sums[i].first));
                    t.erase(t.find(sums[i].second));
                    continue;
                }

            }
        }
    }

}

int main(){

    int t = 1;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}