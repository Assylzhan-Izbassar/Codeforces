#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int binary_search(vector<int> &a, int c){
    int l = -1;
    int r = a.size();
    while(r > l + 1){
        int mid = l + (r-l)/2;
        if(a[mid] <= c){
            l = mid;
        }else{
            r = mid;
        }
    }
    return l;
}

int main(){

    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> a(n);
    for(int i=0; i < n; ++i) cin >> a[i]; 

    int q;
    cin >> q;
    vector<int> m(q);

    for(int i=0; i < q; ++i) cin >> m[i];

    sort(a.begin(), a.end());

    for(int i=0; i < q; ++i){
        cout << binary_search(a, m[i]) + 1 << endl;
    }

    return 0;
}