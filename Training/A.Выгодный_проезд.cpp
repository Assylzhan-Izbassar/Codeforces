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

void test_case(){
    int n,m,a,b;
    cin >> n >> m >> a >> b;    

    if(m*a <= b){
        cout << a*n << endl;
    }else{
        cout << (n/m) * b + min((n%m) * a, b) << "\n";
    }
}

int main(){

    ios::sync_with_stdio(false);
    int t = 1; 
    // cin >> t;
    while(t--)
        test_case();

    return 0;
}