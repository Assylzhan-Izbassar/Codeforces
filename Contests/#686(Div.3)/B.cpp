#include <iostream>
#include <vector>
#include <map>

using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);

    for(int i=0; i < n; ++i) cin >> a[i];

    map<int, int> m;

    for(int i=0; i < n; ++i){
        m[a[i]]++;
    }

    map<int, int> :: iterator it;

    int mini = -1;
    for(it = m.begin(); it != m.end(); ++it){
        if((*it).second == 1){
            mini = (*it).first;
            break;
        }
    }

    if(mini == -1){
        cout << mini << endl;
    }else{
        for(int i=0; i < n; ++i){
            if(a[i] == mini){
                cout << i + 1 << endl;
                break;
            }
        }
    }
}

int main(){

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}