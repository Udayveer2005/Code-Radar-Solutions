#include <stdio.h>

int main() {
    int a,b,cleared_number;
    scanf("%d %d",&a,&b);
    cleared_number = a & ~(1 << b);
    printf("%d",cleared_number);

    return 0;
}