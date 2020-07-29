#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int a[3];
    int result = 0;
    int count = 0;

    for(size_t i=0; i < n; ++i){
        count = 0;
        for(size_t j=0; j < 3; ++j){
            cin >> a[j];
            if(a[j] == 1){
                count++;
            }
        }
        if(count >= 2)
            result++;
    }

    cout << result << endl;

    return 0;
}