#include <stdio.h>
// Em C as funcoes devem ser declaradas antes de serem chamadas, pois o compilador GCC funciona de maneira sequêncial, de cima para baixo, ou seja, se não forem declaradas antes de serem chamadas elas simplismente não existirão.

// Neste exemplo criarei uma calculadora.

// As funções devem ser inicidas com o tipo de valor que ira retornar, nesse caso é o valor do tipo inteiro "int"
int soma(int a, int b){ //(int a, int b) é o parâmetro da função, ou seja, os valores recebidos
    return a + b; // return é a declaração que ira retornar o valor e atribuilo a variável que lhe fez a chamada
}

int sub(int a, int b){ // subtração
    return a - b;
}

int div(int a, int b){ // divisão
    // No Caso da divisão não pode haver um divisor igual a 0
    if(b != 0){
        return a / b;
    } else{
        printf("O divisor não pode ser igual a 0");
        return 0;
    }
}

int mult(int a, int b){ // multiplicação
    return a * b;
}

int main(){
    int num1;
    int num2;
    int result; // Variável responsável por receber o resultado retornado pela função
    char op;

    printf("Insira o primeiro número: ");
    scanf("%d", &num1);

    printf("Insira o segundo número: ");
    scanf("%d", &num2);

    // Limpar o buffer de entrada
    scanf("%*c");

    printf("Insira a operação: ");
    scanf("%c", &op);

    switch(op){
        case '+':
            result = soma(num1, num2);
            break;
        case '-':
            result = sub(num1, num2);
            break;
        case '/':
            result = div(num1, num2);
            break;
        case '*':
            result = mult(num1, num2);
            break;
        default :
            printf("Operação inválida");
    }

    printf("Seu resultado é: %d\n", result);
}