#include <iostream>

using namespace std;

void solve(){
    int n;
    cin >> n;

    string b;
    cin >> b;

    int a[b.size()];

    a[0] = 1;

    int prevSum = a[0] + (b[0] - '0');

    for(int i=1; i < b.size(); ++i){
        if(b[i] == '1'){
            if(prevSum == 2){
                a[i] = 0;
                prevSum = 1;
            }else{
                a[i] = 1;
                prevSum = 2;
            }
        }else{
            if(prevSum == 1){
                a[i] = 0;
                prevSum = 0;
            }else{
                a[i] = 1;
                prevSum = 1;
            }
        }
    }

    for(int i=0; i < n; ++i){
        cout << a[i];
    }
    cout << endl;
}

int main(){

    int t = 1;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}