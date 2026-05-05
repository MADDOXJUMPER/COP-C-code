#include <stdio.h>

int main(){
    int num;

    printf("Number to generate multiplication table:");
    
    if (scanf("%d", &num) != 1){
        printf("Invalid number. Enter an integer.");
        return 1;
    }

    printf("Multiplication table for %d:\n", num);

    for (int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}