#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> v(n, 0);

    for(int i=0; i < n; ++i) v[i] = i+1;

    for(int i = 0; i < n-1; i++){
        swap(v[i], v[i+1]);
    }

    for(int i=0; i < n; ++i){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}