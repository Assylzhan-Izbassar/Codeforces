#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){ 

    vector<char> l = {'A', 'H', 'I', 'M', 'O', 'o', 'T', 'U', 'V', 'v', 'W','w', 'X', 'x', 'Y', 'b', 'd', 'p', 'q'};

    set<char> st;

    for(int i=0; i < (int)l.size(); ++i){
        st.insert(l[i]);
    }

    string s;
    cin >> s;

    int mid = s.size() / 2;

    for(int i=0; i <= mid; ++i){
        if(st.find(s[i]) == st.end()){
            cout << "NIE\n";
            return 0;
        }
    }

    for(int i=0; i <= mid; ++i){
        if(s[i] == 'p'){
            if(s[s.size()-1-i] == 'q'){
                continue;
            }else{
                cout << "NIE\n";
                return 0;
            }
        }
        if(s[i] == 'q'){
            if(s[s.size()-1-i] == 'p'){
                continue;
            }else{
                cout << "NIE\n";
                return 0;
            }
        }
        if(s[i] == 'b'){
            if(s[s.size()-1-i] == 'd'){
                continue;
            }else{
                cout << "NIE\n";
                return 0;
            }
        }
        if(s[i] == 'd'){
            if(s[s.size()-1-i] == 'b'){
                continue;
            }else{
                cout << "NIE\n";
                return 0;
            }
        }
        if(s[i] != s[s.size()-1-i]){
            cout << "NIE\n";
            return 0;
        }
    }

    cout << "TAK\n";

    return 0;
}