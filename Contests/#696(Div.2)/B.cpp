#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector<char> prime;
set<int> p;

void primes(int n){
    prime = vector<char> (n+1, true);
    prime[0] = prime[1] = false;
    for (int i=2; i<=n; ++i)
        if (prime[i])
            if (i * 1ll * i <= n)
                for (int j=i*i; j<=n; j+=i)
                    prime[j] = false;

    for(int i=0; i <= n; ++i){
        if(prime[i])
            p.insert(i);
    }
}

void solve(){
    int d;
    cin >> d;

    int p1 = 1 + d;

    while(p.find(p1) == p.end()){
        p1++;
    }

    int p2 = p1 + d;

    while(p.find(p2) == p.end()){
        p2++;
    }
    cout << p1 * p2 << endl;
}

int main(){

    primes(1e6);

    int t = 1;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}