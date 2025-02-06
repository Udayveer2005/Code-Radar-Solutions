#include <stdio.h>

int main() {
    int a,b,toggled_number;
    scanf("%d %d",&a,&b);
    toggled_number = a ^ (1 << b);
    printf("%d",toggled_number);

    return 0;
}