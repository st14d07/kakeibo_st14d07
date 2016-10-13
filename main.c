#include <stdio.h>
#define num 5

int main(void) {
	int payments[num];
	int i;
	for(i = 0; i < num; i++) {
		scanf("%d", &payments[i]);
	}
	return 0;
}
