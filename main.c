#include <stdio.h>
#include "stdlib.h"

// fills and return the pointer and the amount
int* return_pointer(int*pointer){

    int* values = NULL;
    int value = 0;
    *pointer = 0;
    do{
        if(*pointer == 0){
            values = (int*) malloc(sizeof(int));
            printf("Bitte wert eingeben");
            scanf("%d", &value);
            while (getchar() != '\n');
            values[*pointer] = value;
        }
        else{
            values = (int*) realloc(values,(*pointer + 1) * sizeof(int));
            printf("Bitte wert eingeben");
            scanf("%d", &value);
            while (getchar() != '\n');
            values[*pointer] = value;
        }
        (*pointer)++;
    } while (value > 0);

    return values;
}

void output(int* pointer, int index){

    for(int i = 0; i < index;i++){
        printf("%d\t", pointer[i]);
    }

}

int main(){

    int* pointer = NULL;
    int index = 0;

    pointer = return_pointer(&index);

    output(pointer,index);

    return 0;
}