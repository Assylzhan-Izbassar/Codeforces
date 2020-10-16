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

    int n, m;
    cin >> n >> m;

    vector<vi> bus = vector<vi>(n, vi(4, 0));

    int p = 1;

    rep(j, 0, n){
        bus[j][0] = p;
        p++;
        bus[j][3] = p;
        p++;
    }

    rep(j, 0, n){
        bus[j][1] = p;
        p++;
        bus[j][2] = p;
        p++;
    }


    rep(i, 0, n){
        rrep(j, 0, 2){
            if(bus[i][j] <= m)
                cout << bus[i][j] << " "; 
        }
        rep(j, 2, 4){
            if(bus[i][j] <= m)
                cout << bus[i][j] << " ";
        }
    }
    cout << endl;


    return 0;
}