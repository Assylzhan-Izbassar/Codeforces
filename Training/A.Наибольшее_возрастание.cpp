#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> a(n+1);

    for(size_t i=0; i < n; ++i) cin >> a[i];
    a[n] = 0;

    int max_lenght = 1;
    int count = 1;

    for(size_t i=0; i < a.size(); ++i){
        if(a[i] < a[i+1]){
            count++;
        }else{
            if(count > max_lenght)
                max_lenght = count;
            count = 1;
        }
    }

    cout << max_lenght << endl;

    return 0;
}