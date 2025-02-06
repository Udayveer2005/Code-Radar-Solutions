#include <stdio.h>

int main() {
    int a,b,after_shift;
    scanf("%d %d",&a,&b);
    after_shift=(1 << b)|a;
    printf("%d",after_shift);

    return 0;
}