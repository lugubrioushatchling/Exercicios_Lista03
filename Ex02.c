#include <stdio.h>

int main(){

    int i;
    char array1[50];
    char array2[50];
    printf("Digite dois elementos: ");
    scanf("%s", array1);
    scanf("%s", array2);
    for (i = 0; array1[i]!='\0'; i++){
        if(array1[i] != array2[i]){
            printf("Sao diferentes.");
            return 0;
        }
    }
    for (i = 0; array2[i]!='\0'; i++){
        if(array1[i] != array2[i]){
            printf("Sao diferentes.");
            return 0;
        }
    }
    printf("Sao iguais!");
    return 0;
}
