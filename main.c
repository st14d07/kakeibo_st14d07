#include <stdio.h>
#define num 5

int main(void) {
	int payments[num];
	int earning[num];
	int i;
	for(i = 0; i < num; i++) {
		printf("payments[%d]: ", i+1);
		scanf("%d", &payments[i]);
		printf("earning[%d]: ", i+1);
		scanf("%d", &earning[i]);
	}
	return 0;
}
