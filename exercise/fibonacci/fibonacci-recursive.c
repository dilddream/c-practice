#include <stdio.h>

/* Compute nth number of fibonacci sequences */

long long fibonacci_recursive(long long n) {

	if (n == 1 || n == 2) return 1;
	return fibonacci_recursive(n-2) + fibonacci_recursive(n-1);

}


int main() {

	int n;
	printf("Enter n: ");
	scanf("%d", &n);


	printf("nth of fibonacci: %lld\n", fibonacci_recursive(n));

	return 0;
}
