#include <stdio.h>

int main(){

    int i;
    int j = 0;
    char array1[50];
    char array2[50];
    printf("Digite dois elementos: ");
    scanf("%s", array1);
    scanf("%s", array2);
    for (i = 0; array2[j]!='\0'; i++){
        if(array1[i]=='\0'){
            array1[i]=array2[j];
            array1[i+1]='\0';
            j++;
        }
    }
    puts(array1);
    return 0;
}
