#include <iostream>

using namespace std;

bool f(long long m, long long x, int lx, int rx){
    if(m < x)
        return false;
    if(m % x == 0){
        if((m/x) >= lx && (m/x) <= rx){
            return true;
        }
    }
    return false;
}

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    for(size_t i=0; i < t; ++i){
        int l, r;
        long long m;
        cin >> l >> r >> m;

        if(m % 2 != 0){
            int a,b,c;
            b = l+3;
            c = l;

            if(m-b+c <=0){
                b = l;
                c = l+3;
            }

            long long lx = 0;
            long long rx = 1e11;

            while(rx > lx + 1){
                long long x = lx + (rx-lx)/2;
                if(f(m-b+c,x,l,r)){
                    lx = x;
                }else{
                    rx = x;
                }
            }
            a = (int)m/lx;
            cout << a << " " << b << " " << c << endl;

        }else{
            int a,b,c;
            b = c = l;
           
            long long lx = 0;
            long long rx = 1e11;

            while(rx > lx + 1){
                long long x = lx + (rx-lx)/2;
                if(f(m,x,l,r)){
                    lx = x;
                }else{
                    rx = x;
                }
            }
            a = (int)m/lx;
            cout << a << " " << b << " " << c << endl;
        }
    }
    return 0;
}