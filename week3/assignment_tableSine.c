/* This program a table that displays the sine and cosine values
    from 0 to 1 inclusive with interval = 0.1
*/

#include <stdio.h>
#include <math.h>

int main(void){
    // prints upper border
    printf("*****************************************************\n");
    printf("* Angle ************ Sine **************** Cos ******\n");
    for (double i = 0; i <= 1.0; i += 0.1){
        // prints the sine and cosine value of i
        printf("* %.3lf *", i);
        printf("* sin(%.3lf) = %.3lf *", i, sin(i));
        printf("* cos(%.3lf) = %.3lf *\n", i, cos(i));
    }
    // prints lower border
    printf("*****************************************************\n");
    return 0;
}

