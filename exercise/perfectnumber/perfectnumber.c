#include <stdio.h>

/* Determine whether n is perfect number or not */

int main() {

	int n;
	printf("Enter n: ");
	scanf("%d", &n);

	long long sum = 0;

	for (int i=1; i<n; i++) {
		if (n % i == 0)
			sum += i;
	}

	if (sum == n) printf("n is perfect number.\n");
	else printf("n is not perfect number.\n");


	return 0;
}
