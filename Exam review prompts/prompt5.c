#include <stdio.h>

int main() {
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int sum = 0;
    int max = numbers[0];
    int min = numbers[0];

    printf("All numbers:");
    for(int i = 0; i < 10; i++){
        printf("%d\n", numbers[i]);
        sum += numbers[i];

        if (numbers[i] > max)
            max = numbers[i];

        if (numbers[i] < min)
            min = numbers[i];
    }

    float avg = (float)sum / 10;

    printf("Sum: %d\n", sum);
    printf("Average: %d\n", avg);
    printf("Largest value: %d\n", max);
    printf("Smallest value: %d\n", min);

    return 0; 

}