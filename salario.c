#include <stdio.h>
#include <math.h>
#include <locale.h>

void main()
{
    printf("A localidade corrente agora � %s \n",setlocale(LC_ALL,""));

    float salario;
    salario = 0;

    printf("Digite o sal�rio inicial do funcion�rio: ");
    scanf("%f",&salario);

    salario = salario + (salario * 0.25);
    printf("O sal�rio deste funcion�rio com b�nus de 25% �: %f", salario);

}
