//minimum and maximum
#include <iostream>
using namespace std;

int main() {
	long n;
	cout << "";
	cin >> n;

	int Arr[n];
	for(int &x: Arr) cin >> x;

	long min = Arr[0];
	long max = Arr[n-1];

	for(int i = 0, j = n-1; i <= n, j >= 0; i++, j--) {
		if(max < Arr[j]) {
			max = Arr[j];
		}
		if(min > Arr[i]) {
			min = Arr[i];
		}
	}

	cout << min << " " << max << endl;
}
