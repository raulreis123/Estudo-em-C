#include <stdio.h>
// O switch case é similar ao (else if), mas ao invés de abrir diversas condicionais ele recebe uma variável e verifica a similaridade do dado em cada caso.


int main(){
    int opcao;

    printf("Bem vindo ao Switch case \n");
    printf("Insira uma opção dentre 1, 2, 3: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1: // if(opcao == 1)
            printf("A opção escolhida foi a 1\n");
            break;
        case 2: // else if(opcao == 2)
            printf("A opção escolhida foi a 2\n");
            break;
        case 3: // else if(opcao == 3)
            printf("A opção escolhida foi a 3\n");
            break;
        default: // Representa o Else em uma estrutura de condição, ou seja, se nenhum caso for encontrado execute:
            printf("Opção inválida\n");
            return 0;
    }
    
    return 0; // Encerramento do programa
}