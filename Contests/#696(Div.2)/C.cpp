#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
 
using namespace std;
 
vector<int> check(int a[], int n, int x){
    multiset<int> s;
 
    for(int i=0; i < 2*n; ++i){
        s.insert(a[i]);
    }
 
    vector<int> ans;
 
    for(int i=0; i < n; ++i){
        auto max_pos = s.end(); //выбираем максимальный элемент
        max_pos--;
 
        int b = x - *max_pos;
 
        s.erase(max_pos); // удаляем максимальный элемент
 
        if(s.find(b) == s.end()){
            return {};
        }
        
        ans.push_back(x-b);
        ans.push_back(b);

        x = max(x-b, b);
 
        s.erase(s.find(b));
    }
 
    return ans;
}
 
void solve(){
 
    int n;
    cin >> n;
 
    int a[2*n];
 
    for(int i=0; i < 2*n; ++i) cin >> a[i];
 
    sort(a, a+2*n);
 
    for(int i=0; i < 2*n-1; ++i){
        int x = a[i] + a[2*n-1]; // перебираем х
 
        vector<int> res = check(a, n, x);
 
        if(!res.empty()){
            cout << "YES\n";
            cout << x << endl;
            for(int j=0; j < n; ++j){
                cout << res[2*j] << " " << res[2*j + 1] << endl;
            }
            return;
        }
    }
    cout << "NO\n";
}
 
int main(){
 
    int t = 1;
    cin >> t;
 
    while(t--){
        solve();
    }
    return 0;
}