#include <iostream>

using namespace std;

int main() {

    int n,m;
    cin >> n >> m;

    int a[n], b[m], c[n+m];

    for(int i=0; i < n; ++i) cin >> a[i];
    for(int i=0; i < m; ++i) cin >> b[i];
    for(int i=0; i < n+m; ++i) c[i] = 0;

    int i=0, j=0;

    while (i < n || j < m) {
        if ((i < n && a[i] < b[j]) || j == m) {
            c[i+j] = a[i];
            i++;
        } else {
            c[i+j] = b[j];
            j++;
        }
    }

    for(int i=0; i < n+m; ++i) {
        cout << c[i] << " ";
    }

    cout << endl;

    return 0;
}