#include <stdio.h>
#include <math.h>

int isprime(int n){
    if (n <= 1){
        return 0;
    }


    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int num;

    printf("Enter a number:");
    if (scanf("%d", &num) != 1){
        printf("Invalid input.\n");
        return 1;
    }

    if (isprime(num)){
        printf("%d is a prime number.\n", num);
    }
    else{
        printf("%d is not a prime number.\n", num);
    }
        return 0;
}