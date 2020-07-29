#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    for(size_t i=0; i < t; ++i){
        int n;
        cin >> n;
        int k = 1e9;
        int a = 1;
        for(; a < n; ++a){
            if((n-a) % a == 0){
                if(k < (n-a)/a){
                    k = (n-a)/a;
                    break;
                }
            }
        }
        cout << a << " " <<  n - a << endl;
    }
    return 0;
}