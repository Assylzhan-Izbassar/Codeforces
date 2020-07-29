#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>

using namespace std;

int main(){

    ios::sync_with_stdio(false);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        map<int, int> m;

        int x;
        for(int i=0; i < n; ++i){
            cin >> x;
            m[x]++;
        }

        map<int, int> :: iterator it;
        int max = -1e9;

        for(it = m.begin(); it != m.end(); ++it){
            if((*it).second > max){
                max = (*it).second;
            }
        }
        int r = m.size();

        cout << std::max(min(r-1,max), min(r,max-1)) << endl;
    }
    return 0;
}