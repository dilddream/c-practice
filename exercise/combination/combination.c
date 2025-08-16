#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void combination(char *str);

int main() {

	int n;
	printf("Enter n: ");
	scanf("%d", &n);

	char *arr;
	arr = malloc(n * sizeof(arr));

	for (int i=0; i<n; i++) arr[i] = 'F';
	printf("%s\n", arr);
	combination(arr);

	free(arr);
	return 0;
}

void combination(char *str) {

	int cur = 0;

	while (cur < strlen(str)) {
		
		if (str[cur] == 'F') {
			str[cur] = 'T';

			while (cur > 0) str[--cur] = 'F';

			printf("%s\n", str);
		}
		else {
			cur++;
		}
	}

