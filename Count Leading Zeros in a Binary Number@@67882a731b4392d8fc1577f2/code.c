#include <stdio.h>
#include <stdint.h>

int main() {
    uint32_t num;
    int count = 0;
    
    // Input the number
   
    scanf("%u", &num);
    
    // Check leading zeros
    while ((num & (1 << 31)) == 0) {
        count++;
        num <<= 1;
    }
    
    // Output the result
    printf("%d", count);
    
    return 0;
}
