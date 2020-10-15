#include <iostream>
#include <vector>

using namespace std;

int mn = 1e6;
vector<int> a;
int n;

void divide(int i, int h1, int h2){
    if(i == n){
        cout << h1 << " " << h2 << endl;
        mn = min(mn, abs(h1-h2));
        return;
    }else{
        cout << "left intermediate of " << h1 << " " << h2 << endl;
        divide(i+1, h1 + a[i], h2);
        cout << "right intermediate of " << h1 << " " << h2 << endl;
        divide(i+1, h1, h2 + a[i]);
    }
}

int main(){

    cin >> n;

    a = vector<int>(n);

    for(int i=0; i < n; ++i) cin >> a[i];

    divide(0, 0, 0);

    cout << mn << endl;

    return 0;
}