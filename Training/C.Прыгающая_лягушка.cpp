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

void test_case(){

    string s;
    cin >> s;

    s.insert(s.begin(), 'R');
    s.push_back('R');

    vector<int> distance;

    for(int i=0; i < s.size(); ++i){
        if(s[i] == 'R'){
            for(int j=i+1; j < s.size(); ++j){
                if(s[j] == 'R'){
                    distance.push_back(j-i);
                    break;
                }
            }
        }
    }

    int maxi = distance[0];

    for(int i=1; i < distance.size(); ++i)
        if(maxi < distance[i]) maxi = distance[i];
    
    cout << maxi << endl;
}

int main(){

    ios::sync_with_stdio(false);
    int t = 1; 
    cin >> t;
    while(t--)
        test_case();

    return 0;
}