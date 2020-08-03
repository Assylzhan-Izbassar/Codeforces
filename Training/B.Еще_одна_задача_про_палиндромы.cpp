#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>

using namespace std;

void print(vector<int> &a){
    for(int i=0; i < a.size(); ++i){
        cout << a[i] << " ";
    }
    cout << endl;
}

void test_case(){

    int n;
    cin >> n;
    vector<int> a(n);

    stack<int> between;
    stack<int> check;

    for(int i=0; i < n; ++i) cin >> a[i];

    for(int i=0; i <= n-3; ++i){
        check.push(a[i]);
        for(int j=i+1; j < n; ++j){
            if(!between.empty() && check.top() == a[j]){
                cout << "YES\n";
                return;
            }
            between.push(a[j]);
        }
        while (!between.empty()){
            between.pop();
        }
    }
    cout << "NO\n";
}

int main(){

    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--){
        test_case();
    }

    return 0;
}