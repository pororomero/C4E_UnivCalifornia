#include <stdio.h>

int main(void){

    int i;
    // print sheep
    for (int i = 1; i <= 5; i++){
        printf(" count %d sheep\n", i);
    }

    int sum = 0, n = 5;
    // summing
    for (int i = 1; i < n; i++){
        sum += i;
        printf("sum is %d, i is %d\n", sum, i);
    }

    return 0;
}
