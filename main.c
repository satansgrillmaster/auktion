#include <stdio.h>
#include "stdlib.h"

// fills the pointer and returns an index
int* return_pointer(int*index){

    int* values = NULL;
    int value = 0;
    int read = 0;

    *index = 0;
    do{
        if(*index == 0){
            values = (int*) malloc(sizeof(int));
            printf("Bitte wert eingeben");
            read = scanf("%d", &value);
            while (getchar() != '\n');
            values[*index] = value;
        }
        else{
            values = (int*) realloc(values, (*index + 1) * sizeof(int));
            printf("Bitte wert eingeben");
            read = scanf("%d", &value);
            while (getchar() != '\n');
            values[*index] = value;
        }
        (*index)++;
    } while (value > 0);

    return values;
}

//output
void output(int* pointer, int index){

    for(int i = 0; i < index;i++){
        printf("%d\t", *pointer);
        pointer++;
    }

}

int main(){

    int* pointer = NULL;
    int index = 0;

    pointer = return_pointer(&index);

    output(pointer,index);

    free(pointer);

    return 0;
}