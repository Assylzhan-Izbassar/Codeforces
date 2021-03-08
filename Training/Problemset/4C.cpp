#include <iostream>
#include <set>
#include <map>
#include <string>

using namespace std;

int main(){

    int n;
    cin >> n;

    string s;
    set<string> st;
    map<string, int> m;

    for(int i=0; i < n; ++i){
        cin >> s;
        if(m.find(s) == m.end()){
            m[s]++;
            cout << "OK\n";
        }else{
            string temp = s;
            s += to_string(m[s]);
            cout << s << endl;
            m[temp]++;
        }
    }

    return 0;
}