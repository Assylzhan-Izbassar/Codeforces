#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

#define sz(c) (ll)((c).size())
#define all(c) c.begin(),c.end()
#define rep(i,a,n) for (ll i = a; i < n; i++)

typedef long long ll;
typedef vector<ll> vi;
typedef vector<bool> vb;

ll n, a, b, p, q;

ll gcd(ll a, ll b) { return !a ? b : gcd(b % a, a); }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

ll get_maxi_sum(ll a, ll b, ll p, ll q){
    ll sum = 0;
    ll na = n / a;
    ll nb = n / b;
    ll nab =  n / lcm(a,b);

    sum += (nab * p);
    sum += ((na - nab) * p);
    sum += ((nb - nab) * q);

    return sum;
}

int main(){
    cin >> n >> a >> b >> p >> q;

    if(p > q)
        cout << get_maxi_sum(a,b,p,q);
    else
        cout << get_maxi_sum(b,a,q,p);
    cout << endl;

    return 0;
}