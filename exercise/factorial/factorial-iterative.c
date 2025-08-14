#include <stdio.h>

/* Computing n factorial (n!) */

int main() {

	int n;
	printf("Enter n: ");
	scanf("%d", &n);

	long long ans = 1;

	for (int i=0; i<n; i++) {
		ans *= (i+1);
	}

	printf("%d! = %lld\n", n, ans);	


	return 0;
}
