#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for(int i=2;i<a;i++){
        if(n%i==0){
            printf("Not Prime");
            break ;
        }
        else{
            printf("Prime");
            break;
        }

    }
    
    return 0;
}