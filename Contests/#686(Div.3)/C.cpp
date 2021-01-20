#include <iostream>
#include <vector>
#include <map>

using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    map<int, int> m;

    for(int i=0; i < n; ++i) cin >> a[i], m[a[i]]++;

    map<int, int> :: iterator it = m.begin();
    if(m.size() == 1){
        cout << 0 << endl;
        return;
    }
    if(m.size() == n){
        cout << 1 << endl;
        return;
    }


}

int main(){

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}