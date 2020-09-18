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

void print(vi &a){
    rep(i,0,a.size()){
        cout << a[i];
    }
    cout << endl;
}


int n, m;
vi a;

void fill(int idx){
    if(idx == n){
        print(a);
        return;
    }else{
        rep(i, 1, m+1){
            a[idx] = i;
            fill(idx+1);
        }
    }
}

int main(){

    cin >> n >> m;

    a = vi(n);

    fill(0);
    
    return 0;
}