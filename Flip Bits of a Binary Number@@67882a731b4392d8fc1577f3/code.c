#include <stdio.h>

int main() {
    int num, flipped_num;
    
    // Input the number
    scanf("%d", &num);
    
    // Flip all the bits
    flipped_num = ~num + 1;
    
    // Output the result
    printf("%d", flipped_num);
    
    return 0;
}

