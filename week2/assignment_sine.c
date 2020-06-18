/* A program that outputs the sine of input x
    To properly implement this assignment, we can use
    conditionals if else. However, this topic is not
    yet introduced. Therefore, it's the sole
    responsibility of the user to watch its input value.

    Also, it is not clear the student should output a
    radian or a degree value. Therefore, I will leave it as
    default behavior (radians) of the sine function from math.h
*/

#include <stdio.h>
#include <math.h>

int main(void){

    double value_x = 0;
    double result = 0;
    // ask a value from the user
    printf("Enter the value of x: ");
    scanf("%lf", &value_x);
    // solve for its sine value
    result = sin(value_x);
    // output the result
    printf("sin(%lf) = %lf\n", value_x, result);

    return 0;
}
