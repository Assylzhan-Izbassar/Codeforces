#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main(){

    ios::sync_with_stdio(false);

    int t;
    cin >>t;

    while(t--){
        int a;
        cin >> a;

        if(360 % (180 - a) == 0){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}