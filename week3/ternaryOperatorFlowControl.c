/* ternary operator and flow of control */

#include <stdio.h>

int main(void){

    int speed;
    printf("\nEnter your speed as an integer: ");
    scanf("%d", &speed);
    // check if speed <= 65, if yes, speed == 65
    // else, check if speed <= 70, if yes, speed = 70
    // otherwise, set speed = 90
    speed = (speed <= 65)? (65): (speed <= 70)? (70) : (90);
    switch(speed){
        case 65: printf("\nNo speeding Ticket\n\n"); break;
        case 70: printf("\nSpeeding Ticket\n\n"); break;
        case 90: printf("\nExpensive Speeding Ticket\n\n"); break;
        default: printf("\nIncorrect speed\n\n");      // unneeded
    }

    return 0;
}
