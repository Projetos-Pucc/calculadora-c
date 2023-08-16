#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

void imp(float a, float b, float c, char op){
    printf ("Operação: %.2f %c %.2f\n", a, op, b);
    printf ("Resultado: %.2f", c);
}

void le(int a, int b){
    printf("Quais os números? (Ex: 13 34)\n");
    scanf ("%d %d", &a, &b); 
}

float subtracao(float *a,float *b,float *c){
    printf("Digite os números que serão subtraídos: ");
    scanf("%f %f", a, b);
    (*c) = (*a) - (*b);
    return (*c);
}

int main()
{
    float a,b,c;
    system("cls");
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
        case 2: c = subtracao(&a,&b,&c);
        imp(a,b,c,'-');

            break;

        default:
            break;
        }
    } while (opcao != 0 && opcao != 2);
}
