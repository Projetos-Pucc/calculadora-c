#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

void imp(int a, int b, int c, char op){
    printf ("Operação: %.2f %c %.2f\n", a, op, b);
    printf ("Resultado: %.2f", c);
}

void le(int a, int b){
    printf("Quais os números? (Ex: 13 34)\n");
    scanf ("2%d", a, b); 
}

int main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    int opcao = 0, numVoos = 0;

    do
    {
        system("cls");

        printf("\n\t===\t|Menu|\t===\t\n");
        printf("\n1. Opcao");
        printf("\n2. \tSair\n");

        scanf("%i", &opcao);
        system("cls");

        switch (opcao)
        {
        case 1:
            break;

        default:
            break;
        }
    } while (opcao != 0 && opcao != 2);
}