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
typedef long long ll;

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
void print(stack<char> st){
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

void test_case(){

    string s;
    cin >> s;

    stack<char> st;
    int distance = 0;
    int ans = 0;

    for(int i=0; i < s.size(); ++i){
        if(s[i] == 'A'){
            if(!st.empty()){
                if(st.top() == 'B' && distance == 1){
                    distance = 0;
                    st.pop();
                    ans++;
                }
                else{
                    st.push(s[i]);
                }
            }else{
                st.push(s[i]);
            }
            distance = 0;
        }
        if(s[i] == 'B'){
            if(!st.empty()){
                if(st.top() == 'A' && distance == 1){
                    distance = 0;
                    st.pop();
                    ans++;
                }
                else{
                    st.push(s[i]);
                }
            }else{
                st.push(s[i]);
            }
            distance = 0;
        }
        ++distance;
    }

    if(st.empty() || ans >= 2){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
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
    // cin >> t;
    while(t--)
        test_case();

    return 0;
}