#include <stdio.h>

long int factorial(int n);

int main(void){

    int num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d!= %d", num, factorial(num));

    return 0;
}

long int factorial(int n){
    if (n == 1 || n == 0){
        return 1;
    } else {
        return n * factorial(n-1);
    }
}
