#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

void imp(float a, float b, float c, char op) {
    printf("Operação: %.2f %c %.2f\n", a, op, b);
    printf("Resultado: %.2f\n", c);
}

void le(float *a, float *b) {
    printf("Quais os números? (Ex: 13 34)\n");
    scanf("%f %f", a, b);
}

float subtracao(float a, float b) {
    return a - b;
}

float soma(float a, float b) {
    float c;
    c = a + b;
    return c;
}

float mult(float a, float b) {
    return a * b;
}

float divisao(float a, float b){
    return a / b;
}

int main() {
    float a, b, c;
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    int opcao = 0;

    do {
        system("cls");
        printf("========================\n");
        printf("========Calculadoa======\n");
        printf("========================\n");

        printf("[1]Soma\n[2]Subtração\n[3]Multiplicação\n[4]Divisão\n[0]Sair\n");

        scanf("%d", &opcao);

        system("cls");

        if (opcao!=0)
            le(&a, &b);
        switch(opcao){
            case 0:break;
            case 1:
                imp(a, b, soma(a, b), '+');
                break;
            case 2:
                imp(a, b, subtracao(a, b), '-');
                break;
            case 3:
                imp(a, b, mult(a, b), '*');
                break;
            case 4:
                imp(a, b, divisao(a, b), '//');
                break;
        }
    } while (opcao != 0);
    return 0; 
}
