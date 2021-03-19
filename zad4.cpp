/*
 * suma ulamkow
 * */
#include <iostream>
#include <stdio.h>

int nwd(int a, int b) {
	while(a != b) {
		if(a > b) {
			a -= b;
		}
		else {
			b -= a;
		}
	}
	return a;
}

int main() {
	int t, a, b, c, d, licznik, mianownik;
	printf("");
	scanf("%d", &t);
	while(t--) {
		printf("");
		scanf("%d %d %d %d", &a, &b, &c, &d);
		mianownik = b*d/nwd(b, d);
		licznik = (mianownik / b)*a + (mianownik / d)*c;
		int tmp = nwd(licznik, mianownik);
		licznik /= tmp;
		mianownik /= tmp;	
		printf("%d/%d\n", licznik, mianownik);
	}

}
