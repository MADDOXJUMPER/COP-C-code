#include <stdio.h>

void add(){
    float a, b;
    printf("Enter two numbers:");
    scanf("%f %f", &a, &b);
    printf("Result: %.2f\n", a + b);
}

void sub(){
    float a, b;
    printf("Enter two numbers:");
    scanf("%f %f", &a, &b);
    printf("Result: %.2f\n", a - b);
}

void multiply(){
    float a, b;
    printf("Enter two numbers:");
    scanf("%f %f", &a, &b);
    printf("Result: %.2f\n", a * b);
}

void divide(){
    float a, b;
    printf("Enter two numbers:");
    scanf("%f %f", &a, &b);
    printf("Result: %.2f\n", a / b);
}

int main(){

    int choice;

    do {
        printf("MENU\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);
    

    switch(choice){
        case 1: add(); break;
        case 2: sub(); break;
        case 3: multiply(); break;
        case 4: divide(); break;
        case 5: printf("Exiting...\n"); break;
        default: printf("Invalid choice. Make a valid selcetion.");
    }
}

while (choice != 5);

return 0;
}