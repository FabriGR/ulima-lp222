#include <stdio.h>
#include <stdbool.h>

int main(){
    const int MAX_NUM = 10;
    int numbers[MAX_NUM];
    int count = 0;
    int value;
    while(true){
        scanf("%d", &value);
        if(value != 0){
            numbers[count] = value;
            count++;
        }else{
            break;
        }
    }
    int i;
    for(i = 0; i < count; i++){
        printf("%d ", numbers[i] * numbers[i]);
    }
    
}