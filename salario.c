#include <stdio.h>
#include <math.h>
#include <locale.h>

void main()
{
    printf("A localidade corrente agora é %s \n",setlocale(LC_ALL,""));

    float salario;
    salario = 0;

    printf("Digite o salário inicial do funcionário: ");
    scanf("%f",&salario);

    salario = salario + (salario * 0.25);
    printf("O salário deste funcionário com bônus de 25% é: %f", salario);

}
