/*
    Use of simple arrays as parameters
    Sorting bublle sort
    Display each loop
    Easy but inefficient
*/

#include <stdio.h>

void swap(int *a, int *b);
void printArray(int how_many, int data[], char *str);
void bubbleSort(int data[], int how_many);

int main(void){
    const int SIZE = 5;
    int grades[5] = {78, 67,92, 83, 88}; // SIZE = 5
    printArray(SIZE, grades, "My grades\n");
    printf("\n\n");
    bubbleSort(grades, SIZE);
    printArray(SIZE, grades, "My grades\n");
    printf("\n\n");

    return 0;
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int how_many, int data[], char *str){
    int i;
    printf("%s", str);
    for (i = 0; i < how_many; i++){
        printf("%d\t", data[i]);
    }
}

void bubbleSort(int data[], int how_many){
    int i, j;
    int go_on;
    for (i = 0; i < how_many; i++){
        printArray(how_many, data, "\ninside bubble\n");
        printf("i = %d, input any int to contribute: ", i);
        scanf("%d", &go_on);
        printf("\ngo_on = %d\n", go_on);
        for (j = how_many - 1; j > i; j--){
            if (data[j-1] > data[j]){
                printf("data[j-1] = %d, data[j] = %d\n", data[j-1], data[j]);
                swap(&data[j-1], &data[j]);
            }
        }
    }
}



