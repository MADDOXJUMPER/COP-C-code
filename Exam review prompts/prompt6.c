#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    int num;
    int evencount = 0;
    int oddcount = 0;
    int greaterthan50 = 0;

    printf("Numbers:\n");
    
    for (int i = 0; i < 20; i++){
        num = (rand() % 100) + 1;
        printf("%d\n", num);

        if (num % 2 == 0)
            evencount++;

        else
            oddcount++;

            if (num > 50)
                greaterthan50++;
    }

    printf("Results:\n");
    printf("Even numbers: %d\n", evencount);
    printf("Odd numbers: %d\n", oddcount);
    printf("Numbers greater than 50: %d\n", greaterthan50);

    return 0;

}