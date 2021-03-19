//Count how many ways you can break a 2xn chocolate into 2x1 pieces
#include <iostream>
using namespace std;
long long fibonacci(long long n) {
	unsigned long long num1 = 0;
	unsigned long long num2 = 1;
	unsigned long long sum = 0;
	while(n--) {
		sum = num1%1000000009 + num2%1000000009;
		num1 = num2;
		num2 = sum%1000000009;
	}
	return sum % 1000000009;

}

int main() {
	long long n;
	cout << "";
	cin >> n;
	while(n--) {
		long i;
		cout << "";
		cin >> i;
		cout << fibonacci(i) << endl;
	}
}
