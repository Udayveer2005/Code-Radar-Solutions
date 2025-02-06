#include <stdio.h>

int main() {
    int num, count = 0;
    
    // Input the number
    scanf("%d", &num);
    
    // Count trailing zeros
    while ((num & 1) == 0 && num != 0) {
        count++;
        num >>= 1;
    }
    
    // Output the result
    printf("%d", count);
    
    return 0;
}
