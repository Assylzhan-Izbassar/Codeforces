#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <queue>
#include <deque>
#include <bitset>
#include <stack>

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


void print(vector<int> &a){
    for(int i=0; i < a.size(); ++i){
        cout << a[i] << " ";
    }
    cout << endl;
}
void print(vector<ll> &a){
    for(int i=0; i < a.size(); ++i){
        cout << a[i] << " ";
    }
    cout << endl;
}

void brute_force(){
    int n;
    cin >> n;

    string s; 
    cin >> s;

    vi subarr(n, 0);

    char end = s[0] == '0' ? '1' : '0';
    int subindx = 1;
    
    rep(i, 0, n){
        if(subarr[i] == 0){
            end = s[i] == '0' ? '1' : '0';
            rep(j, i, n){
                if(end == '0' && s[j] == '1'){
                    if(subarr[j] == 0){
                        subarr[j] = subindx;
                        end = '1';
                    }
                }
                if(end == '1' && s[j] == '0'){
                    if(subarr[j] == 0){
                        subarr[j] = subindx;
                        end = '0';
                    }
                }
            }
            subindx++;
        }
    }   
    cout << --subindx << endl;
    print(subarr);
}

void test_case(){
    int n; 
    cin >> n;

    string s;
    cin >> s;

    vi opos, zpos;
    vi span(n);

    rep(i, 0, n){
        int new_pos = opos.size() + zpos.size();
        if(s[i] == '0'){
            if(opos.empty()){
                zpos.pb(new_pos);
            }else{  
                new_pos = opos.back();
                opos.pop_back();
                zpos.pb(new_pos);
            }
        }else{
            if(zpos.empty()){
                opos.pb(new_pos);
            }else{
                new_pos = zpos.back();
                zpos.pop_back();
                opos.pb(new_pos);
            }
        }
        span[i] = new_pos+1;
    }
    cout << opos.size() + zpos.size() << endl;
    each(x, span) cout << x << " ";
    cout << endl;
}
int main(){

    #ifdef _DEBUG
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1; 
    cin >> t;
    while(t--)
        test_case();

    return 0;
}