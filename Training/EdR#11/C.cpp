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

int main(){

    #ifdef _DEBUG
	    freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vi a(n);

    rep(i, 0, n) cin >> a[i];

    int l = 0;
    int zeros = 0;
    int res = 0;
    int gl, gr;

    for(int r = 0; r < n; ++r){
        if(a[r] == 0)
            zeros++;
        while(zeros > k){
            if(a[l] == 0)
                zeros--;
            l++;
        }
        if(res < r-l+1){
            res = r-l+1;
            gl = l; gr = r;
        }
    }
    cout << res << endl;

    rep(i, 0, n){
        if(i >= gl && i <= gr){
            if(a[i] == 0 && k > 0){
                a[i] = 1;
                k--;
            }
        }
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}