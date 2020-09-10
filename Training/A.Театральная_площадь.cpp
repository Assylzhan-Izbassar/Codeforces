#include <iostream>

using namespace std;

int main(){

    int n, m, a;
    cin >> n >> m >> a;

    long long cnt = 0;

    if(n % a == 0){
        cnt = n/a;
    }else{
        cnt = n/a + 1;
    }

    long long cnt2 = 0;
    if(m % a == 0){
        cnt2 = (m)/a; 
    }else{
        cnt2 = (m/a + 1);
    }   

    cout << cnt*cnt2 << endl;

    return 0;
}