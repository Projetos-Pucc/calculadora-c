#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <math.h>

void printResult(float num1, float num2, float result, char op) {
    printf("Operação: %.2f %c %.2f\n", num1, op, num2);
    printf("Resultado: %.2f", result);
}

void readNumbers(float *num1, float *num2) {
    printf("Quais os números? (Ex: 13 34)\n");
    scanf("%f %f", num1, num2);
}

int main() {
    float num1 = 0, num2 = 0, result = 0;
    int menuOption = 0;
    
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    do {
        system("cls");
        printf("========================\n");
        printf("========Calculadoa======\n");
        printf("========================\n");

        printf("[1]Soma\n[2]Subtração\n[3]Multiplicação\n[4]Divisão\n[5]Raiz Quadrada\n[6]Potência\n");


        scanf("%d", &menuOption);

        switch (menuOption) {
            case 1:
                break;

            default:
                break;
        }

    } while (menuOption != 0 && menuOption != 2);
}
