#include <stdio.h>

int main(){

    int i;
    int tamanho = 0;
    char array1[50];
    printf("Digite algo: ");
    scanf("%s", array1);
    for (i = 0; array1[i]!=0; i++){
        tamanho++;
    }
    printf("O tamanho da sua string eh de %d elementos", tamanho);
    return 0;
}
