#include <stdio.h>

int main() {
    int n, i, j;
    
    // Taking input for size of the square
    printf("Enter the size of the square: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) { 
        for (j = 1; j <= n; j++) { 
            // Print '*' for first row, last row, first column, or last column
            if (i == 1 || i == n || j == 1 || j == n) 
                printf("* ");
            else
                printf("  "); // Print space for hollow part
        }
        printf("\n");
    }
    
    return 0;
}
