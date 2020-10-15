#include <iostream>

using namespace std;

int main(){

    long long n;
    cin >> n;   

    long long k = 0;
    long long i = 1;
    while(k < n){
        i++;
        k = i*(i+1)/2;
    }
    i--;
    k = i*(i+1)/2;

    if(n - k == 0){
        cout << i << endl;
    }else{
        cout << n-k << endl;
    }

    return 0;
}