#include <iostream>
#include <vector>

using namespace std;

vector<char> alph;

void doit(){
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    int i = 0;
    for(; i < b; ++i){
        s += alph[i];
    }
    i = 0;
    while(s.size() < a){
        s.push_back(s[i]);
        i++;
    }
    i = 0;
    while(a < n){
        s.push_back(s[i]);
        a++;
        i++;
    }
    cout << s << endl;
}
int main(){

    for(char c = 'a'; c <= 'z'; ++c)
        alph.push_back(c);

    int t;
    cin >> t;

    while(t--){
        doit();
    }

    return 0;
}