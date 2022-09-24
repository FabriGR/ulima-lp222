#include <stdio.h>

int main(){
    int base, exponent, i;
    scanf("%d %d", &base, &exponent);
    int result = 1;
    for(i = 1; i <= exponent; i++){
        result = result * base;
    }
    printf("%d\n", result);
    return 0;
}