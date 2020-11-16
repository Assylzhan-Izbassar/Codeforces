#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

#define sz(c) (int)((c).size())
#define all(c) c.begin(),c.end()
#define rep(i,a,n) for (int i = a; i < n; i++)

typedef long long ll;
typedef vector<int> vi;
typedef vector<bool> vb;

int main(){

    int y;
    cin >> y;

    if(y % 4 != 0){
        cout << y + 6;
    }else if(y % 100 != 0){
        cout << y + 28;
    }else if(y % 400 != 0){
        cout << y + 6;
    }else{
        cout << y + 28;
    }

    cout << endl;

    return 0;
}