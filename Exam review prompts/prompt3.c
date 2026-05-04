#include <stdio.h>

int main(){

    int num;

    printf("Enter a number:");
    scanf("%d", &num);

    if (num % 2 == 0 && num > 0)
        printf("Number is even and positive.");

    else if (num % 2 == 1 && num > 0)
        printf("Number is odd and positive.");

    else if (num % 2 == 0 && num < 0)
        printf("Number is even and negative.");

    else if (num % 2 == 1 && num < 0)
        printf("Number is odd and negative.");

    else
        printf("Number is zero.");

    return 0;
}