/* Use of pointers */

#include <stdio.h>

int main(void){

    // could cause error since array size shouldn't be a variable
    // const int SIZE = 5;
    int grades[5] = {78, 67, 92, 83, 88};
    double sum = 0.0;
    double *ptrToSum = &sum;
    int i;

    printf("\n my grades are:\n");
    for (i = 0; i < 5; i++){        // SIZE = 5
        printf("%d\t", grades[i]);
        sum += grades[i];
    }
    printf("\n\n");

    printf("my average is %.2f\n\n", sum/5);

    printf("sum is at %p, or %lu and is %.2lf\n", ptrToSum, ptrToSum, *ptrToSum);
    printf("grades are at %lu to %lu\n", grades, grades + 5);

    return 0;
}

