/*
    function prototypes
*/

#include <stdio.h>

double square(double);
double cube(double);

int main(void){

    double how_many = 0;
    int i, j;
    printf("I want square and cube for 1 to n where n is: ");
    scanf("%lf", &how_many);
    printf("\n square and cubes by interval of .1\n");

    // /* his code
    for (i = 1; i <= how_many; i++){
        for (j = 0; j <= 10; j++){
            printf("\n%lf\t %lf\t%lf", i + j/10.0, square(i + j/10.0), cube(i + j/10.0));
        }
    }

    printf("\n\n");
    // */

    // my code
    for (double k = 1; k <= how_many; k += 0.1){
        printf("\n%lf\t %lf\t%lf", k, square(k), cube(k));
    }


    return 0;
}

double square(double x){
    return (x*x);
}

double cube(double x){
    return (x*x*x);
}
