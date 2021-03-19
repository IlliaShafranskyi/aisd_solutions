//chinese new year
#include <iostream>
using namespace std;
long long nwd(long long a, long long b) {
	if (b == 0)
		return a;
	else
		return nwd(b, a % b);
}

int main() {
	int n;
	cout << "";
	cin >> n;
	long long res = 1;
	for(int i = 2; i <= n; i++) {
		res = res / nwd(res, i)*i;
	}
	cout << res << endl;
}
