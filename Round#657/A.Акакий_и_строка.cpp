#include <iostream>
#include <vector>

using namespace std;

const string p = "abacaba";

int count(string s){
    int cnt = 0;
    for(size_t i=0; i < s.size(); ++i){
        if(s.substr(i, p.size()) == p){
            cnt++;
        }
    }
    return cnt;
}

int main(){

    ios::sync_with_stdio(false);

    int t,n;
    cin >> t;

    string ss = "";

    for(size_t tt=0; tt < t; ++tt){
        bool result = false;
        cin >> n; 
        cin >> ss;

        for(size_t i=0; i + p.size() <= n; ++i){
            string s = ss;
            bool isOkay = true; 
            for(size_t j=0; j < p.size(); ++j){
                if(s[i+j] != '?' && s[i+j] != p[j]){
                    isOkay = false;
                    break;
                }
                s[i+j] = p[j];
            }
            if(isOkay && count(s) == 1){
                for(size_t j=0; j < s.size(); ++j){
                    if(s[j] == '?')
                        s[j] = 'z';
                }
                result = true;
                cout << "Yes\n";
                cout << s << endl;
                break;
            }
        }
        if(!result){
            cout << "No\n";
        }

    }

    return 0;
}