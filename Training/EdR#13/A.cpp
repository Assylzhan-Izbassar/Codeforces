#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

#define sz(c) (int)((c).size())
#define all(c) c.begin(),c.end()
#define rep(i,a,n) for (int i = a; i < n; i++)

typedef long long ll;
typedef vector<int> vi;
typedef vector<bool> vb;

int main(){

    int n, k;
    cin >> n >> k;

    if(n >= k){
        int m = n / k + 1;
        cout << m * k;
    }else{
        cout << k;
    }
    cout << endl;

    return 0;
}