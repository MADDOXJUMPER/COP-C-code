#include <stdio.h>

int main()
{
    int i = 1;
    int sum = 0;
    int sn = 0;

    printf("Enter stopping number:");
    scanf("%d", &sn);
    
     while (i <= sn) {
         if (i % 2 == 0){
         printf("%d ", i);
         sum = sum + i;
        i ++;
       }else{
            i ++;
        }
    }
    
    printf("\nEven sum = %d\n\n", sum);
    return 0;
}