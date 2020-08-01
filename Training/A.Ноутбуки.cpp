#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>

using namespace std;

int main(){

    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    int x, y;
    map<int, int> m;

    for(int i=0; i < n; ++i){
        cin >> x >> y;
        m[x] = y;
    }

    vector<pair<int, int> > a(n);

    map<int, int> :: iterator it;
    bool okay = false;

    int i = 0;
    for(it = m.begin(); it != m.end(); ++it){
        a[i].first = (*it).first;
        a[i].second = (*it).second;
        i++;
    }

    for(int i=0; i < n-1; ++i){
        if(a[i].second > a[i+1].second){
            okay = true;
            break;
        }
    }
    if(okay) cout << "Happy Alex\n";
    else cout << "Poor Alex\n";

    return 0;
}