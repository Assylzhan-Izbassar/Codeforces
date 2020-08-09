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

int f_gcd (int a, int b) {
	while (b) {
		a %= b;
		swap (a, b);
	}
	return a;
}
void optimal_solution(int n){
    cout << n / 2 << endl;
}
void test_case(){
    int n;
    cin >> n;

    int maxi = -1;

    for(int i=1; i < n; ++i){
        int a = i;
        int b = i*2 <= n ? i*2 : i+1;
        int gcd = f_gcd(a,b);
        if(gcd > maxi)
            maxi = gcd;
    }
    cout << maxi << endl;
}

int main(){

    #ifdef _DEBUG
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false);
    int t = 1; 
    cin >> t;
    while(t--)
        test_case();

    return 0;
}