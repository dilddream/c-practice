#include <stdio.h>
#include <time.h>

int main() {

	time_t start = time(NULL);
	time_t stop = time(NULL);
	
	// time function	
	printf("%lld\n", (double)difftime(stop, start));


	return 0;

}
