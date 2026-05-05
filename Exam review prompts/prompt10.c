#include <stdio.h>

int main() {
    int matrix[3][3];
    int main_diag = 0, sec_diag = 0;

   
    printf("Enter elements for a 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    
    printf("\nRow Sums:\n");
    for (int i = 0; i < 3; i++) {
        int row_sum = 0;
        for (int j = 0; j < 3; j++) {
            row_sum += matrix[i][j];
        }
        printf("Sum of row %d: %d\n", i + 1, row_sum);
    }

    
    printf("\nColumn Sums:\n");
    for (int j = 0; j < 3; j++) {
        int col_sum = 0;
        for (int i = 0; i < 3; i++) {
            col_sum += matrix[i][j];
        }
        printf("Sum of column %d: %d\n", j + 1, col_sum);
    }

    
    for (int i = 0; i < 3; i++) {
        main_diag += matrix[i][i];          
        sec_diag += matrix[i][2 - i];       
    }

    printf("\nDiagonal Sums:\n");
    printf("Main Diagonal Sum: %d\n", main_diag);
    printf("Secondary Diagonal Sum: %d\n", sec_diag);

    return 0;
}