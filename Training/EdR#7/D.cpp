#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> s(2*n);

    int j = 0;
    for(int i=1; i <= n; i += 2){
        s[j] = s[n-j-1] = i;
        j++;
    }
    j = n;
    for(int i=2; i <= n; i+=2){
        s[j] = s[3*n-j-2] = i;
        j++;
    }
    s[2*n-1] = n;

    for(int i=0; i < (int)s.size(); ++i){
        cout << s[i] << " ";
    }
    cout << endl;

    return 0;
}