#include <stdio.h>
#include <string.h>

int main(){
    char word[51];
    scanf("%50s", word);
    int i;
    int length = strlen(word);

    int countDiff = 0;
    for(i = 0; i < length / 2; i++){
        if(word[i] != word[length-i-1]){
            countDiff++;
        }
    }
    printf("%d\n", countDiff);
    if(countDiff == 0){
        printf("SI");
    }else if(countDiff == 1){
        printf("PUEDE SER");
    }else{
        printf("NO");
    }
    return 0;
}