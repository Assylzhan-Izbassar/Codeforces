#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <deque>

using namespace std;

void print(vector<int> &a){
    for(int i=0; i < a.size(); ++i){
        cout << a[i] << " ";
    }
    cout << endl;
}
map<int, int> bill;

bool f(int y){
    map<int, int> :: reverse_iterator it;

    for(it = bill.rbegin(); it != bill.rend(); ++it){
        while(y >= (*it).first && (*it).second > 0){
            y -= (*it).first;
            --(*it).second;
        }
    }
    return y == 0;
}

void test_case(){
    int n;
    cin >> n;

    deque<int> deg;

    int x;

    for(int i=0; i < n; ++i) cin >> x, deg.push_back(x);

    bill[25] = 0;
    bill[50] = 0;
    bill[100] = 0;

    while(!deg.empty()){
        x = deg.front();
        bill[x]++;
        int y = x - 25;
        if(f(y)){
            deg.pop_front();
        }else{
            break;
        }
    }

    if(deg.empty()) cout << "YES\n";
    else cout << "NO\n";

}

int main(){

    ios::sync_with_stdio(false);
    int t = 1; 
    // cin >> t;
    while(t--)
        test_case();

    return 0;
}