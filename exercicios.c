//  #include <stdio.h> 

//  void main () { 
//     int num[5]; 

//     printf("Entre com um numero \n "); 
//     scanf("%d", &num[0]);
    
//     printf("O valor digitado foi: %d", num [0]*2); 
//     getchar(); 
    
//     }

 #include <stdio.h> 
 #include <stdlib.h> 
 
 main() { 
    float s=0, v; 
    int op; 
    
    do { 
        printf("\n Digite sua Operacao"); 
        printf("\n 1. Deposito"); 
        printf("\n 2. Saque"); 
        printf("\n 3. Saldo"); 
        printf("\n 4. Sair"); 
        printf("\n Opcao? "); 
        scanf("%d", &op); 
        
        switch(op) { 
            case 1: printf("\n Valor do deposito? "); 
            scanf("%f", &v);
                s=s+v; 
                break; 
             
            case 2: printf("\n Valor do saque? "); 
            scanf("%f", &v); 
                s=s-v; 
                break; 
            
            case 3: printf("\n Saldo atual = R$ %.2f \n", s); 
                break; 
            
            default:
                if(op!=4) printf("\n Opcao Invalida! \n"); 
            } 

        } while (op!=4); 
            printf("Fim das transacoes. \n\n"); 
            system("pause"); 
            return 0; 
    }