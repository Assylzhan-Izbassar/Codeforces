#include <iostream>
#include <algorithm>

using namespace std;

int main(){

	int n;
	cin >> n;

	int arr[n];

	for(int i=0; i < n; ++i) cin >> arr[i];

	sort(arr, arr+n);

	int result = 0;
	int l = 0;

	for(int r = 0; r < n; ++r){
		while(arr[r] - arr[l] > 5){
			l++;
		}
		result = max(result, r - l + 1);
	}
	cout << result << endl;

	return 0;
}