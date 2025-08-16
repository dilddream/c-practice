#include <stdio.h>

/* Calculate binomial coefficient of n and r (recursive) */

long long bin_coef(int n, int r) {
	if (r == 0 || r == n) return 1;
	if (r == 1) return n;
	
	return bin_coef(n-1, r-1) + bin_coef(n-1, r);
}

int main() {

	int n, r;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter r: ");
	scanf("%d", &r);

	
	printf("nCr: %lld\n", bin_coef(n, r));


	return 0;
}
