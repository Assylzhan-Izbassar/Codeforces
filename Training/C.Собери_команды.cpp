#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

void test_case(){
    
    int t;
    cin >> t;

    while(t--){
        int n,x;
        cin >> n >> x;

        vector<int> a(n);

        for(int i=0; i < n; ++i) cin >> a[i];

        make_heap(a.begin(), a.end());
        sort_heap(a.begin(), a.end());

        for(int i=0; i < a.size()/2; ++i){
            swap(a[i], a[a.size()-i-1]);
        }

        int res = 0, size = 0;
        int l = 0;
        for(int r = 0; r < n; ++r){
            if((r - l + 1) * a[r] >= x){
                res++;
                l = r + 1;
            }
        }
        cout << res << endl;
    }
}

void test(){

}

int main(){

    ios::sync_with_stdio(false);
    test_case();
    return 0;
}