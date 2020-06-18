#include <stdio.h>
/* Read in Three Floats and Print Sum
    June 13, 2020
*/

int main (void){
    float num1, num2, num3, sum;
    printf("Input three floats:");
    scanf("%f%f%f", &num1, &num2, &num3);
    printf("num1 = %.2f, num2 = %.2f, num3 = %.2f\n", num1, num2, num3);
    sum = num1 + num2 + num3;
    printf("sum: %.2f\n\n", sum);

    return 0;
}
