#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

/* что сумма первых 𝑘 нечетных чисел равна 𝑘2. 
Если 𝑘2>𝑛, то ответ очевидно равен «NO». И если 𝑛%2≠𝑘%2, то ответ также равен «NO» ... 
Полный разбор: https://codeforces.com/blog/entry/75147 */

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    int t;
    cin >> t;

    while(t--){
        long long n,k;
        cin >> n >> k;

        if(k*k > n){
            cout << "NO\n";
            continue;
        }
        if(n % 2 != k % 2){
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        
    }

    return 0;
}