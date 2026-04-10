#include<stdio.h>

int main(){
    int numbers[10];
    int i;

    printf("Enter 10 integer values:\n");
    for (i = 0; i < 10; i++){
        printf("value %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("Original Order:\n");
    for (i = 0; i < 10; i++){
        printf("%d", numbers[i]);
    }

    printf("\nReverse Order:\n");
    for (i = 9; i >= 0; i--){
        printf("%d", numbers[i]);
    }

    printf("\n");
    return 0;
}