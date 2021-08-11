#include <iostream>
#include <vector>

using namespace std;

string s;
vector<bool> used;
vector<char> a;

void out() {
    for(int i=0; i < a.size(); ++i) {
        cout << a[i];
    }
    cout << endl;
}

void rec(int idx) {

    if(idx == s.size()) {
        out();
        return;
    } else {
        for(int i=0; i < s.size(); ++i) {
            if(used[i])
                continue;
            used[i] = true;
            a[idx] = s[i];
            rec(idx+1);
            used[i] = false;
        }
    }
}

int main() {
    
    cin >> s;

    int n = s.size();

    a = vector<char> (n);
    used = vector<bool> (n);

    rec(0);

    return 0;
}