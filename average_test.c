#include <stdio.h>
#include "average.h"

int main(void)
{
    int payments[5] = {1, 1, 2, 3, 3};
    if(average(payments) == 2) {
       printf("テスト成功\n");
    } else {
       printf("テスト失敗\n");
    }
    return 0;
}
