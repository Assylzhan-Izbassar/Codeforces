#include <iostream>
#include <string>

using namespace std;
/*
int count(string s, char c){
    int cnt = 0;
    for(int i=0; i < s.size(); ++i){
        if(c == s[i])
            cnt++;
    }
    return cnt;
}

int calc(string s, int l, int r, char c){
    if(r - l == 1){
        return s[l] != c;
    }else{
        int mid = l + (r-l)/2;
        int cnt_l = calc(s, mid, r, c+1) + (r-l)/2 - count(s.substr(l, mid), c);
        int cnt_r = calc(s, l, mid, c+1) + (r-l)/2 - count(s.substr(mid), c);
        return min(cnt_l, cnt_r);
    }
}*/

int count(string::iterator a, string::iterator b, char c){
    int cnt = 0;
    for(; a != b; ++a){
        if((*a) == c){
            cnt++;
        }
    }
    return cnt;
}

int calc(const string &s, char c) {
	if (s.size() == 1) {
		return s[0] != c;
	}
	int mid = s.size() / 2;
	int cntl = s.size() / 2 - count(s.begin() + mid, s.end(), c) + calc(string(s.begin(), s.begin() + mid), c + 1);
	int cntr = s.size() / 2 - count(s.begin(), s.begin() + mid, c) + calc(string(s.begin() + mid, s.end()), c + 1);
	return min(cntl, cntr);
}

int main(){ 

    ios::sync_with_stdio(0);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        cout << calc(s,'a') << endl;
    }
    return 0;
}