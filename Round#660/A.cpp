#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
 
using namespace std;
 
int main(){
 
    ios::sync_with_stdio(false);
 
    int t; 
    cin >> t;


    while(t--){
        int n;
        cin >> n;
        if(n <= 30){
            cout << "NO\n";
            continue;
        }
        if(n == 36){
            cout << "YES\n";
            cout << 6 << " " << 10 << " " << 5 << " " << 15 << endl;
            continue;
        }
        if(n == 40){
            cout << "YES\n";
            cout << 6 << " " << 10 << " " << 15 << " " << 9 << endl;
            continue;
        }
        if(n == 44){
            cout << "YES\n";
            cout << 6 << " " << 10 << " " << 7 << " " << 21 << endl;
            continue;
        }
        cout << "YES\n";
        cout << 6 << " " << 10 << " " << 14 << " " << n - 30 << endl;
    }

    return 0;
}
