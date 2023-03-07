// #include <stdio.h>

// // Somar duas variáveis
// int main(){
//     int idade1;
//     int idade2;
//     int resultado;

//     printf("\n Digite a 1ª idade: ");
//     scanf("%d", &idade1);

//     printf("\n Digite a 2ª idade: ");
//     scanf("%d", &idade2);

//     resultado = idade1+idade2;

//     printf("\n O resultado da soma das duas idades: %d anos.", resultado);
// }

// #include<stdio.h>

// float t1, t2;

// float calcularMedia(){
//     return (t1 + t2)/2; }

// int main(){
//     printf("\n Digite as duas temperaturas: ");
//     scanf("%f %f",&t1,&t2);

//     printf("\n A temperatura media = %.2f",calcularMedia());
//     return 0;
// }

// #include <stdio.h>

// int testar (int* n1, int* n2){
//     *n1 = -1;
//     *n2 = -2;

//     printf("\n\n Valores dentro da função testar(): ");
//     printf("\n n1 = %d e n2 = %d",*n1,*n2);
//     return 0;}

// int main (){
//     int n1 = 10;
//     int n2 = 20;

//     printf("\n\n Valores antes de chamar a função: ");

//     printf("\n n1 = %d e n2 = %d",n1,n2);

//     testar(&n1, &n2);

//     printf("\n\n Valores depois de chamar a função: ");

//     printf("\n n1 = %d e n2 = %d",n1,n2);
//     return 0;
// }

// #include <stdio.h>
// int fatNaoRecursivo(int n)
// {
//     if (n < 2)
//         return 1;
//     int f = 1;
//     int i;
//     for (i = 2; i <= n; i++)
//         f = f * i;
//     return f;
// }
// int fatRecursivo(int n)
// {
//     if (n < 2)
//         return 1;
//     return fatRecursivo(n - 1) * n;
// }
// int main()
// {
//     printf("%d\n", fatNaoRecursivo(6));
//     printf("%d\n", fatRecursivo(6));
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int *alocar() {
//     return malloc(200);
// }

// int main(){

//     int *memoria;
//     memoria = alocar();

//     if (memoria != NULL)
//     {
//         printf("Endereco de memoria alocada = %x", memoria);
//     }
//     else
//     {
//         printf("Memoria nao alocada");
//     }
//     return 0;
// }

#include <stdio.h>
float t1, t2;
float calcularMedia() { return (t1 + t2) / 2; }
int main()
{
    printf("\n Digite as duas temperaturas: ");
    scanf("%f %f", &t1, &t2);
    printf("\n A temperatura media = %.2f", calcularMedia());
    return 0;
}