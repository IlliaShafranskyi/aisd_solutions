//
//DON'T READ
//SHIT CODE
//DANGEROUS  
#include <iostream>
using namespace std;

int main() {
	int test, i = 0;
	cout << "";
	cin >> test;
	HereWeGoAgain:
			long long a = 1, b = 1, m = 1,  res = 1;
			cout << "";
			cin >> a >> b >> m;
			i++;
			goto DoObliczenia;
	DoObliczenia:
		while(b) {
			if(b % 2 == 1) {
				res *= a;
				b--;
			}
			else {
				a *= a;
				b /= 2;
			}
		}
		cout << res  << endl;
	if(i != test) {
		goto HereWeGoAgain;
	}

}
