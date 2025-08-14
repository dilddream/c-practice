#include <stdio.h>

/* Compute nth number of fibonacci sequences */

int main() {

	int n;
	printf("Enter n: ");
	scanf("%d", &n);

	long long f1, f2, tmp;
	f1 = 1;
	f2 = 1;

	for (int i=n-2; i>0; i--) {
		tmp = f2;
		f2 += f1;
		f1 = tmp;
	}

	printf("nth of fibonacci: %lld\n", f2);

	return 0;
}
