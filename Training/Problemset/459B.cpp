#include <iostream>
#include <map>

using namespace std;

int main() {    

    int n;
    cin >> n;

    int b[n];
    map<int, int> m;

    int mini = 1e9, maxi = 0;

    for(int i=0; i < n; ++i) {
        cin >> b[i];
        mini = min(b[i], mini);
        maxi = max(b[i], maxi);
        m[b[i]]++;
    }
    if(maxi - mini == 0) {
        long long ans = 1;

        for(int i=2; i < n; ++i) {
            ans += i;
        }

        cout << 0 << " " << ans << endl;
    } else{
        cout << maxi - mini << " " << ((long long)m[maxi] * (long long)m[mini]) << endl;
    }

    return 0;
}