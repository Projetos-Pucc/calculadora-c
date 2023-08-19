#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

void print(float num1, float num2, float result, char op);
void readNumbers(float *num1, float *num2);
float minus(float num1, float num2);
float plus(float num1, float num2);
float multiplication(float num1, float num2);
float division(float num1, float num2);

int main(){
    float num1 = 0, num2 = 0;
    int menuOption = 0;

    system("cls");
    do {

        printf("=========================\n");
        printf("========Calculadora======\n");
        printf("=========================\n");

        printf("[1]Soma\n[2]Subtracao\n[3]Multiplicacao\n[4]Divisao\n[0]Sair\n");

        scanf("%d", &menuOption);
        system("cls");
        
        if(menuOption <= 4 && menuOption > 0) {
            readNumbers(&num1, &num2);

            switch (menuOption) {
                case 0:
                    break;
                case 1:
                    print(num1, num2, plus(num1, num2), '+');
                    break;
                case 2:
                    print(num1, num2, minus(num1, num2), '-');
                    break;
                case 3:
                    print(num1, num2, multiplication(num1, num2), '*');
                    break;
                case 4:
                    print(num1, num2, division(num1, num2), '/');
                    break;
            }
        }

    } while (menuOption != 0);

    return 0;
}

void print(float num1, float num2, float result, char op) {
    printf("Operacao: %.2f %c %.2f\n", num1, op, num2);
    printf("Resultado: %.2f\n\n", result);
}

void readNumbers(float *num1, float *num2) {
    printf("Quais os numeros? (Ex: 13 34)\n");
    scanf("%f %f", num1, num2);
}

float minus(float num1, float num2) {
    return num1 - num2;
}

float plus(float num1, float num2) {
    return num1 + num2;
}

float multiplication(float num1, float num2) {
    return num1 * num2;
}

float division(float num1, float num2) {
    return num1 / num2;
}