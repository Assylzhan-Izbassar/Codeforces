#include <iostream>

using namespace std;

int main(){

    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int nom[] = {100,20,10,5,1};
    size_t size = sizeof(nom)/sizeof(int);

    int count = 0;
    while(n != 0){
        for(size_t i=0; i < size; ++i){
            if(nom[i] <= n){
                count++;
                n -= nom[i];
                break;
            }
        }
    }
    cout << count << endl;

    return 0;
}