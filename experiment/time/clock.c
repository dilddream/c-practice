#include <stdio.h>
#include <time.h>
#define STEP 1000000000

int main() {

	clock_t start = clock();
	for (int i=0; i<STEP; i++);
	clock_t stop = clock();

	printf("%d step time: %fsec\n", STEP, (double)(stop-start)/CLOCKS_PER_SEC);


	return 0;
}
