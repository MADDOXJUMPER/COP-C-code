#include<stdio.h>

    void swap_by_value(int a, int b){
        int temp = a;
        a = b;
        b = temp;
    }

    void swap_by_pointer(int *a, int *b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }

    int main(){
        int x = 10;
        int y = 20;

        printf("Intial values:\n");
        printf("x = %d, y = %d\n", x, y);

        swap_by_value(&x, &y);
        printf("After swap by value: x = %d, y = %d\n\n", x, y);

        swap_by_pointer(&x, &y);
        printf("After swap by pointer: x =%d, y =%d\n\n", x, y);

        return 0;

    }