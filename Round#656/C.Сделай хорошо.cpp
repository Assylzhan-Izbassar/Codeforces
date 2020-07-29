#include <iostream>
#include <vector>

using namespace std;

bool isExist(vector<int> &a){
    int i=0;
    int k = a.size()-1;

    vector<int> c;

    while(i <= k){
        if(a[i] <= a[k]){
            c.push_back(a[i]);
            i++;
        }
        else{
            c.push_back(a[k]);
            k--;
        }
    }
    for(size_t i=0; i < c.size()-1; ++i){
        if(c[i] > c[i+1])
            return false;
    }
    return true;
}


bool f(vector<int> &a, int x){
    if(x >= a.size()-1){
        return true;
    }
    vector<int> c;
    for(size_t i=x; i < a.size(); ++i){
        c.push_back(a[i]);
    }
    return isExist(c);
}


int main(){

    ios::sync_with_stdio(false);

    int t;
    cin >> t;

    for(size_t i=0; i < t; ++i){
        int n;
        cin >> n;

        vector<int> a(n);
        for(size_t i=0; i < a.size(); ++i) cin >> a[i];

        int l = -1;
        int r = 1e6;
        while(r > l + 1){
            int x = l + (r-l)/2;

            if(f(a,x)){
                r = x;
            }else{
                l = x;
            }
        }
        cout << r << endl;
    }

    return 0;
}