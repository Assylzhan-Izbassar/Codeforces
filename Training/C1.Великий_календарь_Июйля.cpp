#include <iostream>

using namespace std;

typedef long long ll;

int max_digit(ll n){
    int res = -1;
    ll k = n;
    while(k > 0){
        res = k % 10 > res ? k % 10 : res; 
        k /= 10;
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    ll n;
    cin >> n;

    int count = 0;

    while(n != 0){
        int res = max_digit(n);
        n -= res;
        count++;
    }

    cout << count << endl;

    return 0;
}