#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main(){

    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n-1);
    vector<int> c(n-2);

    for(int i=0; i < n; ++i) cin >> a[i];
    for(int i=0; i < n-1; ++i) cin >> b[i];
    for(int i=0; i < n-2; ++i) cin >> c[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    int r[2];

    for(int i=0; i < a.size(); ++i){
        if(a[i] != b[i]){
            r[0] = a[i];
            break;
        }
    }
    for(int i=0; i < b.size(); ++i){
        if(c[i] != b[i]){
            r[1] = b[i];
            break;
        }
    }

    cout << r[0] << " " << r[1] << endl;

    return 0;
}