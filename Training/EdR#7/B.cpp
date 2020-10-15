#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){

    string s;
    cin >> s;

    vector<int> v;

    int k;
    cin >> k;

    int hh = 0;
    int t = 1;

    for(int i=0; i < (int)s.size(); ++i){
        if(s[i] == ':'){
            t = 1;
            v.push_back(hh);
            hh = 0;
            continue;
        }
        hh += (s[i]-'0')*pow(10, t);
        t--;
    }
    v.push_back(hh);    
    int r = (v[1] + k) / 60;
    v[1] = (v[1] + k) % 60;
    v[0] = (v[0] + r) % 24;

    string dhh = "";
    if(v[0] < 10){
        dhh += '0';
        dhh += v[0]%10 + '0';
    }else{
        dhh += v[0]/10 + '0';
        dhh += v[0]%10 + '0';
    }

    string dmm = "";

    if(v[1] < 10){
        dmm += '0';
        dmm += v[1]%10 + '0';
    }else{
        dmm += v[1]/10 + '0';
        dmm += v[1]%10 + '0';
    }
    cout << dhh << ":" << dmm << endl;

    return 0;
}