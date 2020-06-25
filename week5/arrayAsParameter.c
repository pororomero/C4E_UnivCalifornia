/* Use of simple arrays as parameters */

#include <stdio.h>

double averageGrades(int how_many, int grades[]);
void printGrades(int how_many, int grades[]);


int main(void){

    const int SIZE = 5;
    int grades[SIZE] = {78, 67, 92, 83, 88};

    printGrades(SIZE, grades);
    printf("\n\n");
    printf("my average is %.2f\n\n", averageGrades(SIZE, grades));

    return 0;
}

double averageGrades(int how_many, int grades[]){

    int i;
    double sum = 0.0;
    for (i = 0; i < how_many; i++){
        sum += grades[i];
    }
    return (sum/how_many);
}

void printGrades(int how_many, int grades[]){

    int i;
    printf("I have %d grades\n", how_many);
    for (i = 0; i < how_many; i++){
        printf("%d\t", grades[i]);
    }

}
