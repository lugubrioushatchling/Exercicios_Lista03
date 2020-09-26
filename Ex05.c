#include <stdio.h>

int main(){

    int i = 0;
    char array1[50];
    printf("Digite um elemento: ");
    scanf("%s", array1);
    for (i = 0; array1[i]!='\0'; i++){}
    i--;
    for (int j = 0; j<i; j++){
        if (array1[j] != array1[i]){
            printf("Nao eh palindromo");
            return 0;
        }
    i--;
    }
    printf("Eh palindromo!");
    return 0;
}
