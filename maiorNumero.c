#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    //alterando para o padr�o do sistema operacional
    printf("A localidade corrente agora � %s \n",setlocale(LC_ALL,""));

    int num, num1;

    printf("Digite um n�mero: ");
    scanf("%d", &num);

    printf("Digite outro n�mero: \n");
    scanf("%d", &num1);

    if (num > num1)
        {
            printf("O n�mero %d � maior que o n�mero %d", num, num1);
        }
    else
    {
        printf("O n�mero %d � maior", num1);
    }
}
