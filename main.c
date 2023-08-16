#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

void imp(float a, float b, float c, char op){
    printf ("Operação: %.2f %c %.2f\n", a, op, b);
    printf ("Resultado: %.2f\n", c);
}

void le(float *a, float *b){
    printf("Quais os números? (Ex: 13 34)\n");
    scanf ("%f %f", a, b); 
}

int main()
{
    float a,b,c;
    system("clear");
    setlocale(LC_ALL, "Portuguese");

    int opcao = 0;

   do
    {
        system("clear");
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
