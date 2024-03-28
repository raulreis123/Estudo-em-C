#include <stdio.h>

int main(void){
    // Para exibir um caractere em um printf (%c), para exibir um inteiro (%d)


    char nome = 'M'; //armazenamento de caracteres 8bits
    printf("Variável do tipo Char: %c\n\n", nome);

    int num; //números inteiros
    num = 10;
    printf("Variável do tipo int: %d\n\n", num);

    float num1; //números reais com menor precisão 32bits/6 casas decimais
    num1 = 10.79;
    printf("Variável do tipo float: %d\n\n", num1);

    double num2; //números reais com maior precisão 64bits/15 casas decimais
    num2 = 1134.23423;
    printf("Variável do tipo double: %d\n\n", num2);

    // variações de tipos de variáveis
    // por padrão as variáveis são inicidadas com o valor de sinal (positivo ou negativo)
    unsigned char unsChar = 'a'; //caracter sem sinal, ou seja ele consome todos os 8bits de memória assim descartando o bit de sinal positivo ou negativo, lhe dando um range maior
    signed char sigChar = 'a';

    unsigned int unsInt = 10; // ou seja quando a variável é unsigned o valor só pode ser positivo
    signed int sigInt = -10;

    short int shInt = 10; // valor inteiro com o range reduzido
    long int lnInt = 10; // valor inteiro com o range estendido
}