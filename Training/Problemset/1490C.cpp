// https://codeforces.com/problemset/problem/1490/C
#include <iostream>
#include <cmath>

using namespace std;

void solve(long long x) {

    double e = 1./3.;
    
    for(long long i=1; i*i*i <= x; ++i) {
        long long b = x - i*i*i;

        if (b < 1)
            continue;

        long long s = lround(pow(b, e));

        if (s*s*s == b) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main() {
    int t;
    long long x;
    cin >> t;

    while(t--) {
        cin >> x;

        solve(x);
    }
    return 0;
}