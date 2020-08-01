#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main(){

    ios::sync_with_stdio(false);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int k = 0;
        while(k < n){
            k += 4;
        }

        int e = k / 4;

        for(int i=0; i < n-e; ++i)
            cout << 9;
        for(int i=0; i < e; ++i)
            cout << 8;
        cout << endl;
    }

    return 0;
}