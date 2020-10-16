#include <iostream>
#include <vector>

using namespace std;

#define pb push_back
#define mp make_pair
#define sz(c) (int)((c).size())
#define all(c) c.begin(),c.end()
#define rep(i,a,n) for (int i = a; i < n; i++)
#define rrep(i,a,n) for(int i = n-1; i >= 0; --i)
#define each(x, a) for(auto x : a)
#define fi first
#define se second

typedef long long ll;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef pair<int, int> pii;
typedef tuple<int, int, int> tp;

vi a;

int gcd (int a, int b) {
	while (b) {
		a %= b;
		swap (a, b);
	}
	return a;
}

int main(){

    #ifdef _DEBUG
	    freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    a = vi(n);

    rep(i, 0, n) cin >> a[i];

    vb pos = vb(n, false);

    int cnt = 0;

    rep(i, 0, n-1){
        int b = a[i];
        int c = a[i+1];
        if(gcd(b,c) == 1)
            continue;
        else{
            pos[i+1] = true;
            cnt++;
        }
    }
    int d = 0;
    rep(i, 0, n){
        if(pos[i]){
            a.insert(a.begin()+i+d, 1);
            d++;
        }
    }
    cout << cnt << endl;
    rep(i, 0, (int)a.size()){
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}