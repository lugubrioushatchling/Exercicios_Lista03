#include <stdio.h>

int main(){
    int i;
    char nome[50];
    char nomenovo[50];
    printf("Digite um nome: ");
    gets(nome);
    for (i = 0; nome[i]!='\0'; i++){
        nomenovo[i] = nome[i];
    }
    nomenovo[i] = '\0';
    puts(nomenovo);
    return 0;
}
