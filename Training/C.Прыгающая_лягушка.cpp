#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <queue>

using namespace std;

void print(vector<int> &a){
    for(int i=0; i < a.size(); ++i){
        cout << a[i] << " ";
    }
    cout << endl;
}

bool f(string s, int x){
    s.push_back('R');
    int n = s.size()-1;
    vector<bool> dp(n+1, 0);
    dp[x-1] = 1;

    for(int i=0; i <= dp.size(); ++i){
        if(s[i] == 'L'){
            for(int j = max(0, i - x); j < i; ++j){
                if(j - i >= 0){
                    dp[i] = 1;
                }
            }
        }else{
            for(int j = i+1; j <= min(n+1, i+x); ++j){
                if(i + j < n){
                    dp[j] = 1;
                }
            }
        }
    }
    cout << "DP array when d is :" << x << "\n";
    for(int i=0; i < n+1; ++i){
        cout << dp[i] << " ";
    }
    cout << endl;
    return dp[n];
}

void test_case(){

    string s;
    cin >> s;

    int l = 0; 
    int r = s.size()+1;

    while(r > l + 1){
        int x = (r+l)/2;

        if(f(s,x)){
            r = x;
        }else{
            l = x;
        }
    }
    cout << "answer is: " << r << endl << endl;
}

int main(){

    ios::sync_with_stdio(false);
    int t = 1; 
    cin >> t;
    while(t--)
        test_case();

    return 0;
}