#include <stdio.h>

float calcularIMC(){
    float peso, altura, imc;

    printf("\nInforme seu peso (em Kg): ");
    scanf("%f", &peso);
    printf("\nInforme sua altura (em metros): ");
    scanf("%f", &altura);

    imc = peso/ (altura + altura);

    return imc;
}

int main(){
    float imc = calcularIMC();

    if (imc < 18.5) printf("\nIMC = %.2f, Situacao: Abaixo do peso!", imc);
    else if (imc < 24.9) printf("\nIMC = %.2f, Situacao: Peso ideal!", imc);
    else printf("\nIMC = %.2f, Situacao: Sobrepeso!", imc);
}