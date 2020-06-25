#include <stdio.h>

void swap(int *x, int *y);

int main(void){

    int x, y;
    x = 1;
    y = 2;
    printf("before swap:\n");
    printf("\tx = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("after swap:\n");
    printf("\tx = %d, y = %d\n", x, y);


    return 0;
}

void swap(int *x, int *y){
    int temp;
    temp = *x;
    // printf("y = %d\n", temp);
    *x = *y;
    // printf("x = %d\n", *x);
    *y = temp;
}
