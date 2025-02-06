#include <stdio.h>
#include <stdint.h>

int main() {
    uint32_t num, flipped_num;
    
    // Input the number
    
    scanf("%u", &num);
    
    // Flip all the bits
    flipped_num = ~num;
    
    // Output the result
    printf("%u", flipped_num);
    
    return 0;
}
