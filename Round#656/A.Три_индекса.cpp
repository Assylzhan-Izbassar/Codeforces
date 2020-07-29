#include <iostream>
#include <vector>

using namespace std;

struct indexes
{
    int i,j,k;
    bool res;
    indexes(){}
    indexes(int a, int b, int c, bool _res){
        i = a;
        j = b;
        k = c;
        res = _res;
    }
};

indexes f(vector<int> &a){
    int i=0,j=1,k=2;
    bool res = false;

    
    for(; k <= a.size()-1; ++k){
        for(; j < k; ++j){
            for(; i < j; ++i){
                if(a[i] < a[j] && a[j] > a[k]){
                    return indexes(i,j,k,true);
                }
            }
        }
    }
    return indexes(i,j,k,false);
}


int main(){

    ios::sync_with_stdio(false);

    int t;
    cin >> t;

    for(size_t i=0; i < t; ++i){
        int n;
        cin >> n;

        vector<int> v(n);

        for(size_t j=0; j < v.size(); ++j) cin >> v[j];

        indexes k = f(v);

        if(k.res){
            cout << "YES\n";
            cout << k.i + 1 << " " << k.j + 1 << " " << k.k + 1 << endl;
        }else{
            cout << "NO\n";
        }
    }
    
    return 0;
}