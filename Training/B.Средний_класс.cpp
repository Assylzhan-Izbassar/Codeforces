#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <queue>

using namespace std;

void print(vector<int> &a){
    for(int i=0; i < a.size(); ++i){
        cout << a[i] << " ";
    }
    cout << endl;
}

void test_case(int t){
    while(t--){
        int n,x;
        cin >> n >> x; 
        double total_sum = 0;
        vector<int> a(n);
        for(int i=0; i < n; ++i) cin >> a[i], total_sum += a[i];

        sort(a.begin(), a.end());

        int l = 0;
        int res = 0;
        for(; l < n; ++l){
            if(total_sum / (a.size()-l) >= x){
                res = max(res, (int)a.size()-l);
            }else{
                total_sum -= a[l];
            }
        }
        cout << res << endl; 
    }
}

int main(){

    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    test_case(t);

    return 0;
}