#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <iomanip>

using namespace std;

void print(vector<int> &a){
    for(int i=0; i < a.size(); ++i){
        cout << a[i] << " ";
    }
    cout << endl;
}

bool f(vector<int> &a, double d, int lx, bool z, bool l){

    for(int i=0; i < a.size()-1; ++i){
        double rx = a[i] + d;
        double lx = a[i+1] - d;
        if(lx > rx)
            return false;
    }
    bool isOkay = true;
    if(!z){
        if(a[0] - d > 0) isOkay = false;
    }
    if(!l){
        if(a[a.size()-1] + d < lx) isOkay = false;
    }
    return isOkay;
}

void test_case(){
    int n,lx;
    cin >> n >> lx;

    vector<int> a(n);

    bool isZero = false;
    bool isL = false;

    for(int i=0; i < n; ++i){
        cin >> a[i];
        if(a[i] == 0)
            isZero = true;
        if(a[i] == lx)
            isL = true;
    }

    sort(a.begin(), a.end());

    double l = 0;
    double r = 1e10;


    for(int i=0; i <= 100; ++i){
        double d = l + (r-l)*.5;
        if(f(a, d, lx, isZero, isL)){
            r = d;
        }else{
            l = d;
        }
    }
    printf("%.9f\n", r);
}

int main(){

    ios::sync_with_stdio(false);
    int t = 1; 
    // cin >> t;
    while(t--)
        test_case();

    return 0;
}