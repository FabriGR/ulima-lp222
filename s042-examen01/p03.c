#include <stdio.h>
#include <string.h>
#define MAX_SIZE 50
#define HIDE_CHAR '*'

int main(){
    char text[MAX_SIZE + 1];
    int k;
    fgets(text, MAX_SIZE + 1, stdin);
    scanf("%d", &k);
    int i;

    for(i = strlen(text) - 2; i > strlen(text)-2-k; i--){
        text[i] = HIDE_CHAR;
    }
    printf("Texto convertido: %s", text);

    return 0;
}