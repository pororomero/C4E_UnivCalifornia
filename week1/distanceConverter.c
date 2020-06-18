/* The distance of a marathon in kilometers
    June 13, 2020
*/

#include <stdio.h>

int main(void){
    int miles = 26, yards = 385;
    double kilometers = 0;

    printf("Enter intger miles: ");
    scanf("%d", &miles);
    printf("Enter interger yards: ");
    scanf("%d", &yards);

    kilometers = 1.609 * (miles + yards / 1760.0);
    printf("A marathon is %lf kilometers.\n", kilometers);

    return 0;
}
