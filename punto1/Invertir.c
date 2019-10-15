#include <stdio.h>
#include <string.h>

void invierte (char cadena[]){
    strrev(cadena);
}

int main (){

    char frase[100];
    printf("Ingrese su frase: ");
    gets(frase);
    invierte(frase);
    printf("Su frase invertida es: %s", frase);

}
