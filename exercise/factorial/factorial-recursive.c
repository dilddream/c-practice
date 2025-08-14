#include <stdio.h>

/* Compute n! */

long long factorial_recursive(long long n) {
	if (n == 0) return 1;
	return n*factorial_recursive(n-1);
}


int main() {

	int n;
	printf("Enter n: ");
	scanf("%d", &n);

	printf("%d! = %lld\n", n, factorial_recursive(n));

	return 0;
}
