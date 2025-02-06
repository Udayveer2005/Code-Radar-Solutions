#include <stdio.h>

int main() {
    int num, position = 0;
    
    // Input the number
    
    scanf("%d", &num);
    
    // Find the position of the lowest set bit
    while ((num & 1) == 0) {
        num >>= 1;
        position++;
    }
    
    // Output the result
    printf("%d", position);
    
    return 0;}
        