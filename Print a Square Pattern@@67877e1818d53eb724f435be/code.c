#include <stdio.h>

int main() {
    int size;

    scanf("%d", &size);

    // Loop to print the square pattern
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}