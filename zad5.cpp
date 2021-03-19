/*
 * Euler's totient function
 * counts the positive integers up to a given integer n that are relatively prime to n.'
 *
 * themis  CPP129A
 * */
#include <iostream> 
using namespace std;

int main() {
	unsigned long long n, ans;
	cout << "";
	cin >> n;

	ans = n;
	for(long long i = 2; i*i <= n; i++) {
		if(n%i == 0) {
			while(n % i == 0) n /= i;
			ans -= ans/i;
		}
	}
	if(n > 1) ans -= ans/n;
	cout << ans << endl;

}
