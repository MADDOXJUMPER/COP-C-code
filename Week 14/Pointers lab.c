#include<stdio.h>

void analyzeNumber(int n, int *is_prime, int *digit_count){
    int i;
    if (n <= 1){
        *is_prime = 0;
    }
    else{
        *is_prime = 1;
        for (i =2; i * i <= n; i++){
            if (n % i == 0){
                *is_prime = 0;
                break;
            }
        }
    }
    int temp = n;
    if (temp < 0){
        temp = -temp;
    }

    *digit_count = 0;
    if (temp == 0){
        *digit_count = 1;
    }
    else{
        while (temp > 0){
            (*digit_count)++;
            temp /= 10;
        }
    }
}

    int main(){
        int n, is_prime, digit_count;
        scanf("%d", &n);
        analyzeNumber(n, &is_prime, &digit_count);

        if (is_prime){
            printf("Prime\n");
        }
        else{
            printf("Not prime\n");
        }
        printf("Digits: %d\n", digit_count);
        
        return 0;
    }
    
