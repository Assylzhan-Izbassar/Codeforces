#include <iostream>

using namespace std;

int count(string s, char c, int i){
    int cnt = 0;
    while(s[i] != c && i < s.size()){
        cnt++;
        i++;
    }
    return cnt;
}

int main(){
    ios::sync_with_stdio(0);

    string s;
    cin >> s;

    int f = 0;
    int t = 0;

    bool isOkay = 0;

    for(size_t i=0; i < s.size(); ++i){

        if(s[i] == '0'){
            f = count(s,'1',i);
        }else{
            t = count(s,'0',i);
        }
        if(f >= 7 || t >= 7){
            cout << "YES\n";
            isOkay = 1;
            break;
        }
    }
    if(!isOkay){
        cout << "NO\n";
    }
    return 0;
}
