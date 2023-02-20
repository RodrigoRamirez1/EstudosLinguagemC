#include <stdio.h>

// Somar duas variáveis
int main(){
    int idade1;
    int idade2;
    int resultado;

    printf("\n Digite a 1ª idade: ");
    scanf("%d", &idade1);

    printf("\n Digite a 2ª idade: ");
    scanf("%d", &idade2);

    resultado = idade1+idade2;
    
    printf("\n O resultado da soma das duas idades: %d anos.", resultado);
}