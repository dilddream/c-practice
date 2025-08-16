#include <stdio.h>

/* Calculate binomial coefficient of n and r (iterative) */
int main() {

	int n, r;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter r: ");
	scanf("%d", &r);

	long long ans = 1;
	for (int i=0; i<r; i++) ans *= n-i;
	for (int i=0; i<r; i++) ans /= i+1;

	printf("nCr: %lld\n", ans);


	return 0;
}
