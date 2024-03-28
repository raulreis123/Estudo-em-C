#include <stdio.h>
// Em C as funcoes devem ser declaradas antes da execução do código, pois o compilador GCC funciona de maneira sequêncial, de cima para baixo, ou seja, se não forem declaradas antes de serem chamadas elas simplismente não existirão.

// Neste exemplo criarei uma calculadora.

int soma(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int div(int a, int b){
    return a / b;
}

int mult(int a, int b){
    return a * b;
}

int main(){

}