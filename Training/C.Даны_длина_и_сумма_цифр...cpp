#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <queue>

using namespace std;

typedef long long ll;

void print(vector<int> &a){
    for(int i=0; i < a.size(); ++i){
        cout << a[i] << " ";
    }
    cout << endl;
}

bool check(int m, int s){
    return s >= 0 && s <= 9 * m;
}

void test_case(){
    int m, s;
    cin >> m >> s;

    if(s == 0 && m > 1){
        cout << "-1 -1 \n";
        return;
    }

    string minn = "";
    int sum = s;

    for(int i=0; i < m; ++i){
        for(int d = 0; d <= 9; ++d){
            if((i > 0 || d > 0 || (m == 1 && d == 0)) && check(m-i-1,sum-d)){
                minn += char(d + '0');
                sum -= d;
                break;
            }
        }
    }
    string maxn = "";
    sum = s;
    for(int i=0; i < m; ++i){
        for(int d = 9; d >= 0; --d){
            if((i > 0 || d > 0 || (m == 1 && d == 0)) && check(m-i-1,sum-d)){
                maxn += char(d + '0');
                sum -= d;
                break;
            }
        }
    }

    if(minn.empty() || maxn.empty()){
        cout << "-1 -1\n";
        return;
    }

    cout << minn << " " << maxn << endl;
 
}

int main(){

    #ifdef _DEBUG
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false);
    int t = 1; 
    // cin >> t;
    while(t--)
        test_case();

    return 0;
}