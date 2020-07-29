#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &a, int l, int m, int r){
    int i,j,k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1];
    int R[n2];

    for(i=0; i < n1; ++i)
        L[i] = a[i+l];
    for(j=0; j < n2; ++j)
        R[j] = a[j + m + 1];

    i = j = 0;
    k = l;

    while(i < n1 && j < n2){
        if(L[i] <= R[j]){
            a[k] = L[i];
            i++;
        }else{
            a[k] = R[j];
            j++;
        }
        k++;
    }
    while(i < n1){
        a[k] = L[i];
        i++;
        k++;
    }
    while(j < n2){
        a[k] = R[j];
        j++;
        k++;
    }
}

void merge_sort(vector<int> &a, int l, int r){
    if(r > l){
        int mid = l + (r-l)/2;
        merge_sort(a, l, mid);
        merge_sort(a, mid+1, r);
        merge(a, l, mid, r);
    }
}
int main(){

    int n,k;
    cin >> n >> k;

    vector<int> a(n);

    for(size_t i=0; i < n; ++i) cin >> a[i];

    merge_sort(a, 0, n-1);

    int l = 0;
    int r = n-1;
    int x = 0;

    while(r >= l){
        if(a[r] % k == 0){
            r--;
            continue;
        }
        if(a[l] % k == 0){
            l++;
            continue;
        }
        if((a[l] + x) % k == 0){
            a[l] += x;
            l++;
            x++;
        }
        if((a[r] + x) % k == 0){
            a[r] += x;
            r--;
            x++;
        }
        while((a[r] + x) % k != 0 && (a[l] + x) % k != 0){
            x++;
        }
    }


    for(size_t i=0; i < n; ++i)
        cout << a[i] << " ";
    cout << endl;
    cout << x << endl;

    return 0;
}