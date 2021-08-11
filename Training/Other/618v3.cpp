#include <iostream>

using namespace std;

string s;
int N;

void out() {
    for(int i=0; i < N; ++i) {
        cout << s[i];
    }
    cout << endl;
}

void swap(int *a, int *b) {
    int *t = a;
    a = b;
    b = t;
}

void rec(int idx) {
    if(idx == N) {
        out();
        return;
    } else {
        for(int i=idx; i < N; ++i) {
            swap(s[i], s[idx]);
            rec(idx+1);
            swap(s[i], s[idx]);
        }
    }
}

int main() {
    cin >> s;
    N = s.size();

    rec(0);

    return 0;
}