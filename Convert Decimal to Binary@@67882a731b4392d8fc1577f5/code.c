#include <stdio.h>

void decimalToBinary(int num) {
    int i;
    
    // Iterate from the highest bit to the lowest bit
    for (i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1; // Right shift and bitwise AND to get the ith bit
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    int num;
    
    // Input the decimal number
    
    scanf("%d", &num);
    
    // Convert to binary and print the result
    printf("Binary representation: ");
    decimalToBinary(num);
    
    return 0;
}
