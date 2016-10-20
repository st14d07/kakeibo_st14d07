#include <stdio.h>
#include "sum.c"
#include "average.c"

int main(void) {
	int payments[5] = {2,4,6,7,8};
	printf("合計: %d\n平均: %d\n", sum(payments), average(payments));
	return 0;
}
