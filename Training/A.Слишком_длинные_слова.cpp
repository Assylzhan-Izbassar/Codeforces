#include <iostream>

using namespace std;

void f(string s){
    if(s.size() > 10){
        cout << s[0] << s.size()-2 << s[s.size()-1] << endl;
    }else{
        cout << s << endl;
    }
}

int main(){

    int n;
    cin >> n;
    string s;
    
    for(size_t i=0; i < n; ++i)
        cin >> s,
        f(s);

    return 0;
}