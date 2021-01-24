#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

#define sz(c) (int)((c).size())
#define all(c) c.begin(),c.end()
#define rep(i,a,n) for (int i = a; i < n; i++)

typedef long long ll;
typedef vector<int> vi;
typedef vector<bool> vb;

bool isLeap(int y){
    if(y % 4 != 0){
        return false;
    }else if(y % 100 != 0){
        return true;
    }else if(y % 400 != 0){
        return false;
    }
    return true;
}

int main(){

    int y;
    cin >> y;

    int date = 0;
    bool is_Leap = isLeap(y);

    do{
        date++;
        if(isLeap(y)) date++;
        y++;
        date %= 7;
    }while(date || !isLeap(y));

    cout << y << endl;

    return 0;
}