#include <iostream>

using namespace std;

void solve(){
    int n;
    cin >> n;

    // eqn = a * 2020 + b * 2021
    // eqn = a * 2020 + b * 2020 + b
    // eqn = (a + b) * 2020 + b

    for(int i=0; i < 500; ++i){
        for(int j = 0; j < 500; ++j){
            int val = (i + j) * 2020 + j;
            if(val == n){
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
}

int main(){

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}