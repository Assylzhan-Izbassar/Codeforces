#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int a[n];

    int even = 0, odd = 0;

    for(int i=0; i < n; ++i){
        cin >> a[i];
        if(a[i] % 2 == 0){
            even++;
        }else{
            odd++;
        }
    }
    if(even > odd){
        for(int i=0; i < n; ++i){
            if(a[i] % 2 != 0){
                cout << i+1;
                return 0;
            }
        }
    }else{
        for(int i=0; i < n; ++i){
            if(a[i] % 2 == 0){
                cout << i+1;
                return 0;
            }
        }
    }

    return 0;
}