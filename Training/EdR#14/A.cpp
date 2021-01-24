#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int a[n];

    for(int i=0; i < n; ++i) cin >> a[i];

    if(n == 1){
        if(a[0] == 1){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
        return 0;
    }

    int cnt = 0;
    for(int i=0; i < n; ++i){
        if(a[i] == 0){
            cnt++;
        }
        if(cnt > 1){
            cout << "NO\n";
            return 0;
        }
    }
    if(cnt == 0){
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n";

    return 0;
}