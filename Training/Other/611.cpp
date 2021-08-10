// https://informatics.msk.ru/mod/statements/view.php?id=634#1
#include <iostream>
#include <vector>

using namespace std;

const int N = 300000;

vector<bool> primes(N+N, true);

void resheto() {
    primes[0] = primes[1] = false;

    for(int i=2; i <= N; ++i) {
        if(primes[i]) {
            if(i * 1ll * i <= N) {
                for(int j=i*i; j <= N; j+=i) {
                    primes[j] = false;
                }
            }
        }
    }
}

int main() {

    resheto();

    int n, m;
    cin >> n >> m;

    int cnt = 0;

    for(int i=n; i <= m; ++i) {
        if(primes[i]) {
            cnt++;
            cout << i << endl;
        }
    }

    if(cnt == 0) {
        cout << "Absent\n";
    }

    return 0;
}