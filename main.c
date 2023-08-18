#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

void imp(float a, float b, float c, char op) {
    printf("Operação: %.2f %c %.2f\n", a, op, b);
    printf("Resultado: %.2f", c);
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

        printf("[1]Soma\n[2]Subtração\n[3]Multiplicação\n[4]Divisão\n[5]Sair\n");

        scanf("%d", &opcao);

        system("cls");
        le(&a, &b);

        switch (opcao) {
        case 2:
            c = subtracao(a, b);
            imp(a, b, c, '-');

            break;

        }
    } while (opcao != 0 && opcao != 2);

}
