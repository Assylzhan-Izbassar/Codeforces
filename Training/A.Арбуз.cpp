#include <iostream>

using namespace std;

int main(){
    
    int n;
    cin >> n;

    bool isOkay = false;

    for(size_t i=2; i < n; i *= 2){
        if((n-i) % 2 == 0){
            isOkay = true;
        }
    }
    if(isOkay){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }

    return 0;
}