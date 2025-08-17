#include <stdio.h>

void swap(int *a, int *b) {
	int tmp = *b;
	*b = *a;
	*a = tmp;
}

int main() {

	int x, y, z;
	printf("Enter x, y, z: ");
	scanf("%d %d %d", &x, &y, &z);

	if (x > y) swap(&x, &y);
	if (x > z) swap(&x, &z);
	if (y > z) swap(&y, &z);

	printf("%d %d %d\n", x, y, z);
		
	return 0;
}
