#include <iostream>
#include <vector>

using namespace std;

vector<int> a;
vector<int> p;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n,m;
    cin >> n >> m;

    a = vector<int> (n);
    p = vector<int> (n);

    p[0] = 0;

    for(int i=0; i < n; ++i){
        cin >> a[i];
    }

    for(int i=1; i < n; ++i){
        if(a[i-1] != a[i]){
            p[i] = i;
        }else{
            p[i] = p[i-1];
        }
    }

    while(m--){
        int l, r, x;
        cin >> l >> r >> x;

        if(a[r-1] != x){
            cout << r << endl;
            continue;
        }
        if(p[r-1] >= l){
            cout << p[r-1] << endl;
            continue;
        }
        cout << -1 << endl;
    }

    return 0;
}