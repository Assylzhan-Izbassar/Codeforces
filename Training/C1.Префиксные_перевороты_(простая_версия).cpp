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

using namespace std;

#define pb push_back
typedef long long ll;

void print(vector<int> &a){
    cout << a.size() << " ";
    for(int l=0; l < a.size(); ++l){
        cout << a[l] << " ";
    }
    cout << endl;
}

int flip(string &a, int l){
    for(int j=0; j < l; ++j){
        a[j] = a[j] == '1' ? '0' : '1';
    }
    for(int j=0; j < l / 2; ++j){
        swap(a[j], a[l - 1 - j]);
    }
    return l;
}

void test_case(){
    int n;
    cin >> n;


    string a, b;
    cin >> a >> b;

    vector<int> ans;

    int l = 1;
    for(; l <= a.size(); ++l){
        if(a[l-1] != b[l-1]){
            ans.pb(flip(a, l));
            ans.pb(flip(a, 1));
            ans.pb(flip(a, l));
        }
    }
    
    print(ans);
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