#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int findMax(int arr[], int size);
int findMin(int arr[], int size);
int linearSearch(int arr[], int size, int target);
void displayArray(int arr[], int size);

int main() {
    int size = 15;
    int arr[size];
    int choice, value, index, result;

    
    srand(time(NULL)); 
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100; 
    }

    do {
        printf("\n--- Array Manipulation Menu ---\n");
        printf("1. Display Array\n");
        printf("2. Determine Maximum and Minimum\n");
        printf("3. Perform Linear Search\n");
        printf("4. Modify nth element\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayArray(arr, size);
                break;

            case 2:
               
                printf("Maximum Value: %d\n", findMax(arr, size));
                printf("Minimum Value: %d\n", findMin(arr, size));
                break;

            case 3:
                
                printf("Enter value to search: ");
                scanf("%d", &value);
                if (linearSearch(arr, size, value)) {
                    printf("Result: Exists\n");
                } else {
                    printf("Result: Does not exist\n");
                }
                break;

            case 4:
                
                printf("Enter the index (0-%d) to modify: ", size - 1);
                scanf("%d", &index);
                if (index >= 0 && index < size) {
                    printf("Enter new value: ");
                    scanf("%d", &value);
                    arr[index] = value;
                    printf("Array updated successfully.\n");
                } else {
                    printf("Invalid index!\n");
                }
                break;

            case 0:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 0);

    return 0;
}



void displayArray(int arr[], int size) {
    printf("Current Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

int findMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) min = arr[i];
    }
    return min;
}

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) return 1; // Found
    }
    return 0; 
}