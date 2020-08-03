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

int maxi = 0;

bool f(vector<int> &p, int x){
    int t = 0;
    for(int l = 0; l < p.size() - x; ++l){
        int r = l + x;
        int sum = p[r+1] - p[l+1]; 
        t = max(t, sum/x);
    }
    if(maxi < t){
        maxi = t;
        return 1;
    }
    return 0;
}

void test_case(){
    int n;
    cin >> n;

    if(n==1){
        cout << 1 << endl;
        return;
    }
    vector<int> a(n);
    vector<int> p(n+1);
    p[0] = 0;
    for(int i=0; i < n; ++i) cin >> a[i], p[i+1] = p[i] + a[i];

    int l = 0;
    int r = n;

    while(r > l + 1){
        int x = (r+l)/2;
        if(f(p, x)){
            l = x;
        }else{
            r = x;
        }
    }
    cout << l << endl;
}

int main(){

    ios::sync_with_stdio(false);
    int t = 1; 
    // cin >> t;
    while(t--)
        test_case();

    return 0;
}