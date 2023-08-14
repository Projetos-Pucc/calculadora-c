#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <math.h>

int main()
{
    float a=0,b=0,c=0;
    setlocale(LC_ALL, "Portuguese");

    int opcao = 0;

    do
    {
        system("cls");
        printf("========================\n");
        printf("========Calculadoa======\n");
        printf("========================\n");

        printf("[1]Soma\n[2]Subtração\n[3]Multiplicação\n[4]Divisão\n[5]Raiz Quadrada\n[6]Potência\n");

        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            break;

        default:
            break;
        }
    } while (opcao != 0 && opcao != 2);
}
