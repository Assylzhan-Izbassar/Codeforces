#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    
    int n;
    cin >> n;

    vector<int> a(n);

    for(int i=0; i < n; ++i) cin >> a[i];

    sort(a.begin(), a.end());

    int r = a.size() - 1;
    int l = 0;

    int res = 0;

    while(r != l){
        if(a[r] + a[l] <= 4){
            a[r] += a[l];
            l++;
        }else{
            res++;
            r--;
        }
    }
    cout << res + 1 << endl;
    
    return 0;
}