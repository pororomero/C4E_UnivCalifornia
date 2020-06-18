/* Conversion of Fahrenheit to Celsius
    June 13, 2020
*/

#include <stdio.h>

int main(void){

    double fahrenheit = 0, celsius = 0;

    printf("Please enter fahrenheit as an integer: ");
    scanf("%lf", &fahrenheit);

    celsius = (fahrenheit - 32) / 1.8; // conversion formula
    printf("%.2lf fahrenheit is %.2lf celcius\n", fahrenheit, celsius);

    return 0;

}
