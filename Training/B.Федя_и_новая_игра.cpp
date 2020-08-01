#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

bool isFriend(int x, int f, int k){

    int count = 0;
    while(x > 0 && f > 0){
        if(count > k)
            return false;
        int a = x % 2;
        int b = f % 2;
        if((a ^ b) == 1){
            count++;
        }
        x /= 2;
        f /= 2;
    }
    while(x > 0){
        if(count > k)
            return false;
        int a = x % 2;
        int b = 0;
        if((a ^ b) == 1)
            count++;
        x /= 2;
    }

    while(f > 0){
        if(count > k)
            return false;
        int a = 0;
        int b = f % 2;
        if((a ^ b) == 1)
            count++;
        f /= 2;
    }

    return count <= k;
}

int main(){

    ios::sync_with_stdio(false);

    int n,m,k;
    cin >> n >> m >> k;

    vector<int> x(m+1);

    for(int i=0; i <= m; ++i) cin >> x[i];

    int res = 0;
    for(int i=0; i < m; ++i){
        if(isFriend(x[i], x[m], k)){
            res++;
        }
    }
    cout << res << endl;

    return 0;
}