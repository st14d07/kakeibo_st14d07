#include <stdio.h>
#include "sum.h"

int sum(int array[]) {
	int i;
	int sum_r = 0;
	//int arr_length = sizeof(array) / sizeof(array[0]);
	//printf("%d\n", arr_length);
	//for(i = 0; i < arr_length; i++) {
	for(i = 0; i < 5; i++) {
		sum_r += array[i];
	}
	//printf("%d\n", sum_r);
	return sum_r;
}
