#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>

using namespace std;

vector<int> a;
int n, l;

bool f(double d){

    if(a[0] != 0 && a[0] - d >= 0){
        return false;
    }
    if(a[a.size()-1] != l && a[a.size()-1] + d <= l){
        return false;
    }

    for(int i=0; i < a.size()-1; ++i){
        if(a[i] + d <= a[i+1] - d){
            return false;
        }
    }
    return true;
}

void with_binary(){

    double pl = 0;
    double pr = l;

    for(int i=0; i < 60; ++i){
        double d = pl + (pr-pl)/2;

        if(f(d)){
            pr = d;
        }else{
            pl = d;
        }
    }

    printf("%.10f\n",pr);
}

void math_apr(){
    int res = 2*max(a[0], l - a[n-1]);
    for(int i=0; i < n-1; ++i){
        res = max(res, a[i+1] - a[i]);
    }
    printf("%.10f\n",res/2.);
}

int main(){

    cin >> n >> l;

    a = vector<int> (n);

    for(int i=0; i < n; ++i) cin >> a[i];

    sort(a.begin(), a.end());

    math_apr();
    
    return 0;
}