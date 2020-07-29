#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n,t;
    cin >> n >> t;

    vector<int> a(n);

    for(int i=0; i < n; ++i) cin >> a[i];

    int l=0;
    int sum = 0;

    int res = 0;

    for(int r = 0; r < n; ++r){
        sum += a[r];
        while(sum > t){
            sum -= a[l];
            l++;
        }
        res = max(res, r-l+1);
    }
    cout << res << endl;
    return 0;
}