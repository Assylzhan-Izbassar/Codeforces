#include <iostream>
#include <cmath>

using namespace std;

string solve(){

    long long n;
    cin >> n;

    if(pow(2, (int)log2(n)) == n){
        return "NO\n";
    }

    return "YES\n";
}

int main(){

    int t;
    cin >> t;

    while(t--){
        cout << solve();
    }

    return 0;
}