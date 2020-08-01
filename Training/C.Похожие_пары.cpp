#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main(){

    ios::sync_with_stdio(false);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);

        int e = 0;
        int o = 0;

        for(int i=0; i < n; ++i){
            cin >> a[i];
            if(a[i] % 2){
                e++;
            }else{
                o++;
            }
        }
        
        if((e % 2) != (o % 2)){
            cout << "NO\n";
            continue;
        }

        if(e % 2 == 0 && o % 2 == 0){
            cout << "YES\n";
            continue;
        }
        if(e % 2 != 0 && o % 2 != 0){
            bool isExits = 0;
            for(int i=0; i < n; ++i){
                for(int j=0; j < n; ++j){
                    if(abs(a[i]-a[j]) == 1){
                        isExits = 1;
                        break;
                    }
                }
                if(isExits){
                    cout << "YES\n";
                    break;
                }
            }
            if(!isExits){
                cout << "NO\n";
            }
        }
    }
    return 0;
}