/* Valentine Day Program
    demonstrate loop with while
    */

#include <stdio.h>

int main(void){

    int repeat = 0;
    printf("How strong is your love 1-10? : ");
    scanf("%d", &repeat);
    printf("\nI love you very");
    while (repeat > 0){
        printf("\n very");
        repeat--;
    }
    printf(" much.\n\n");

    return 0;
}
