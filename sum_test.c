#include <stdio.h>
#include "sum.h"
#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0])

int main(void) {
	int payments[5] = {0, 1, 2, 3, 4};

	printf("%d\n", sum(payments));
	if(sum(payments) == 10) {
		printf("paymentsの合計: テスト成功\n");
	}	else {
		printf("paymentsの合計: テスト失敗\n");
	}

	return 0;
}
