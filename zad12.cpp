//buble sort
#include "stdio.h"

int count = 0;
void swap(long long *x, long long *y) {
	count++;
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
bool ifSort(int n, long long Arr[]) {
	bool isSort_v = true;
	for(int i = 1; i < n; i++) {
		if(Arr[i-1] > Arr[i]) {
			isSort_v = false;
			break;
		}
		else {
			isSort_v = true;
		}
	}
	return isSort_v;
}
int main() {
	int n;
	scanf("%d", &n);
	long long Arr[n];

	for(int i = 0; i < n; i++) 
		scanf("%lld", &Arr[i]);
	
	if(ifSort(n, Arr) != true) {
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n-i-1; j++) {
				if(Arr[j] > Arr[j+1]) {
					swap(&Arr[j], &Arr[j+1]);
				}
			}
			if(ifSort(n, Arr) != true) {
				for(int k = 0; k < n; k++) {
					printf("%lld ", Arr[k]);
				}
				printf("\n");
			}

		}
		for(int k = 0; k < n; k++) {
			printf("%lld ", Arr[k]);
		}

		printf("\n");
	}
	else {
		printf("\n");
	}


}
